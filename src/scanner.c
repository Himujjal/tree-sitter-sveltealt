#include "tree_sitter/parser.h"
#include <stdbool.h>

typedef enum TokenType {
  RAW_TEXT,
  COMMENT,
  RAW_TEXT_INLINE,
  RAW_TEXT_ROUND
} TokenType;

bool scan_comment(TSLexer *lexer, bool multilined) {
  while (lexer->lookahead) {
    switch (lexer->lookahead) {
    case '\n': {
      if (multilined)
        break;
      lexer->result_symbol = COMMENT;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true;
    }
    case '*': {
      lexer->advance(lexer, false);
      if (multilined && lexer->lookahead == '/') {
        lexer->result_symbol = COMMENT;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true;
      }
    }
    default:;
    }

    lexer->advance(lexer, false);
  }
  if (lexer->lookahead == 0 && multilined) {
    lexer->result_symbol = COMMENT;
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    return true;
  }
  return false;
}

/**
 * Problem with raw text is with tokens such as '{' , '}' or strings
 * the problem with '{' and '}' is obvious as these are nested
 * but the problem with strings is that they may also contain '}'
 * We deal with those in these function
 * */
bool scan_raw_text(TSLexer *lexer, TokenType tokType) {
  /* printTokenType(tokType); */
  uint32_t inner_curly_start = 0;
  uint32_t inner_round_start = 0;

  char inner_quote = 0;
  int32_t c = lexer->lookahead;

  while (c) {
    if (c == '{' && !inner_quote) {
      if (tokType == RAW_TEXT_INLINE && inner_curly_start == 0) {
        lexer->mark_end(lexer);
        break;
      }
      inner_curly_start++;
    } else if (c == '}' && !inner_quote) {
      if (inner_curly_start > 0) {
        inner_curly_start--;
      } else if (tokType == RAW_TEXT) {
        lexer->mark_end(lexer);
        break;
      }
    } else if (c == '\'' || c == '"' || c == '`') {
      if (!inner_quote) {
        inner_quote = c;
      } else if (inner_quote == c) {
        inner_quote = 0;
      }
    } else if (c == '\\' && inner_quote) {
      lexer->advance(lexer, false);
    }

    if (c == '(' && !inner_quote && tokType == RAW_TEXT_ROUND) {
      inner_round_start++;
    } else if (c == ')' && !inner_quote && tokType == RAW_TEXT_ROUND) {
      if (inner_round_start > 0) {
        inner_round_start--;
      } else if (tokType == RAW_TEXT_ROUND) {
        lexer->mark_end(lexer);
        break;
      }
    }

    lexer->advance(lexer, false);
    c = lexer->lookahead;
  }

  lexer->result_symbol = tokType;
  return true;
}

static inline bool iswspace(char c) {
  return c == ' ' || c == '\n' || c == '\r' || c == '\t';
}

bool scan(TSLexer *lexer, const bool *valid_symbols) {
  while (iswspace(lexer->lookahead))
    lexer->advance(lexer, true);

#define SCAN_RAW(en)                                                           \
  if (valid_symbols[(en)])                                                     \
    return scan_raw_text(lexer, (en));

  SCAN_RAW(RAW_TEXT);
  SCAN_RAW(RAW_TEXT_INLINE);
  SCAN_RAW(RAW_TEXT_ROUND);

#undef SCAN_RAW

  switch (lexer->lookahead) {
  case '/': {
    lexer->advance(lexer, false);
    char c = lexer->lookahead;
    if (c == '/' || c == '*') {
      lexer->advance(lexer, false);
      return scan_comment(lexer, c == '*');
    }
    break;
  }
  case '\0':
  default:
    break;
  }

  return false;
}

void *tree_sitter_sveltealt_external_scanner_create() { return NULL; }

bool tree_sitter_sveltealt_external_scanner_scan(void *payload, TSLexer *lexer,
                                                 const bool *valid_symbols) {
  return scan(lexer, valid_symbols);
}

unsigned tree_sitter_sveltealt_external_scanner_serialize(void *payload,
                                                          char *buffer) {
  return 0;
}

void tree_sitter_sveltealt_external_scanner_deserialize(void *payload,
                                                        const char *buffer,
                                                        unsigned length) {}

void tree_sitter_sveltealt_external_scanner_destroy(void *payload) {}
