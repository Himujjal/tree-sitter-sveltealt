#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACE_RBRACE = 3,
  anon_sym_AT = 4,
  anon_sym_script = 5,
  anon_sym_style = 6,
  anon_sym_each = 7,
  anon_sym_if = 8,
  anon_sym_elseif = 9,
  anon_sym_elseif2 = 10,
  anon_sym_else = 11,
  anon_sym_await = 12,
  anon_sym_then = 13,
  anon_sym_catch = 14,
  anon_sym_DOT = 15,
  anon_sym_POUND = 16,
  anon_sym_TILDE = 17,
  anon_sym_EQ = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_LPAREN_RPAREN = 21,
  aux_sym_attribute_name_token1 = 22,
  aux_sym_attribute_value_token1 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_quoted_attribute_value_token1 = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_quoted_attribute_value_token2 = 27,
  aux_sym__start_tag_name_token1 = 28,
  aux_sym__text_token1 = 29,
  anon_sym_BSLASH_AT = 30,
  anon_sym_BSLASH_LBRACE = 31,
  anon_sym_BSLASH_RBRACE = 32,
  sym_unicode = 33,
  sym_raw_text = 34,
  sym_comment = 35,
  sym_raw_text_inline = 36,
  sym_raw_text_round = 37,
  sym_document = 38,
  sym__node = 39,
  sym_element = 40,
  sym_script_element = 41,
  sym_start_tag = 42,
  sym_script_start_tag = 43,
  sym_style_element = 44,
  sym_style_start_tag = 45,
  sym_special_element = 46,
  sym__special_element_start_tag = 47,
  sym_class_attribute = 48,
  sym_id_attribute = 49,
  sym_style_attribute = 50,
  sym__attribute = 51,
  sym__gen_attribute = 52,
  sym_expression_attribute = 53,
  sym_attribute_name = 54,
  sym_attribute_value = 55,
  sym_quoted_attribute_value = 56,
  sym__start_tag_name = 57,
  sym__text = 58,
  sym_expression = 59,
  aux_sym_document_repeat1 = 60,
  aux_sym_element_repeat1 = 61,
  aux_sym_start_tag_repeat1 = 62,
  alias_sym_attribute = 63,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_AT] = "@",
  [anon_sym_script] = "tag_name",
  [anon_sym_style] = "tag_name",
  [anon_sym_each] = "each_tag",
  [anon_sym_if] = "if_tag",
  [anon_sym_elseif] = "elseif_tag",
  [anon_sym_elseif2] = "elseif_tag",
  [anon_sym_else] = "else_tag",
  [anon_sym_await] = "await_tag",
  [anon_sym_then] = "then_tag",
  [anon_sym_catch] = "catch_tag",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN_RPAREN] = "()",
  [aux_sym_attribute_name_token1] = "attribute_name_token1",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [aux_sym__start_tag_name_token1] = "_start_tag_name_token1",
  [aux_sym__text_token1] = "text",
  [anon_sym_BSLASH_AT] = "text",
  [anon_sym_BSLASH_LBRACE] = "text",
  [anon_sym_BSLASH_RBRACE] = "text",
  [sym_unicode] = "unicode",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_raw_text_inline] = "raw_text",
  [sym_raw_text_round] = "raw_text",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_element] = "style_element",
  [sym_style_start_tag] = "start_tag",
  [sym_special_element] = "special_element",
  [sym__special_element_start_tag] = "start_tag",
  [sym_class_attribute] = "class_attribute",
  [sym_id_attribute] = "id_attribute",
  [sym_style_attribute] = "style_attribute",
  [sym__attribute] = "_attribute",
  [sym__gen_attribute] = "_gen_attribute",
  [sym_expression_attribute] = "expression_attribute",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__start_tag_name] = "tag_name",
  [sym__text] = "_text",
  [sym_expression] = "expression",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [alias_sym_attribute] = "attribute",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_style] = anon_sym_script,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_elseif2] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [aux_sym_attribute_name_token1] = aux_sym_attribute_name_token1,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [aux_sym__start_tag_name_token1] = aux_sym__start_tag_name_token1,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_BSLASH_AT] = aux_sym__text_token1,
  [anon_sym_BSLASH_LBRACE] = aux_sym__text_token1,
  [anon_sym_BSLASH_RBRACE] = aux_sym__text_token1,
  [sym_unicode] = sym_unicode,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_raw_text_inline] = sym_raw_text,
  [sym_raw_text_round] = sym_raw_text,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_element] = sym_style_element,
  [sym_style_start_tag] = sym_start_tag,
  [sym_special_element] = sym_special_element,
  [sym__special_element_start_tag] = sym_start_tag,
  [sym_class_attribute] = sym_class_attribute,
  [sym_id_attribute] = sym_id_attribute,
  [sym_style_attribute] = sym_style_attribute,
  [sym__attribute] = sym__attribute,
  [sym__gen_attribute] = sym__gen_attribute,
  [sym_expression_attribute] = sym_expression_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__start_tag_name] = anon_sym_script,
  [sym__text] = sym__text,
  [sym_expression] = sym_expression,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [alias_sym_attribute] = alias_sym_attribute,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_elseif2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__start_tag_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_AT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text_round] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_special_element] = {
    .visible = true,
    .named = true,
  },
  [sym__special_element_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_class_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_id_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__gen_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_attribute,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__gen_attribute, 2,
    sym__gen_attribute,
    alias_sym_attribute,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '/' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '/' &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(71);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_elseif2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_await);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attribute_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '=' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__start_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH_AT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unicode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 2},
  [2] = {.lex_state = 12, .external_lex_state = 2},
  [3] = {.lex_state = 12, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 4, .external_lex_state = 2},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 4, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 12, .external_lex_state = 2},
  [13] = {.lex_state = 12, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 12, .external_lex_state = 2},
  [19] = {.lex_state = 12, .external_lex_state = 2},
  [20] = {.lex_state = 12, .external_lex_state = 2},
  [21] = {.lex_state = 12, .external_lex_state = 2},
  [22] = {.lex_state = 12, .external_lex_state = 2},
  [23] = {.lex_state = 12, .external_lex_state = 2},
  [24] = {.lex_state = 12, .external_lex_state = 2},
  [25] = {.lex_state = 12, .external_lex_state = 2},
  [26] = {.lex_state = 12, .external_lex_state = 2},
  [27] = {.lex_state = 12, .external_lex_state = 2},
  [28] = {.lex_state = 12, .external_lex_state = 2},
  [29] = {.lex_state = 12, .external_lex_state = 2},
  [30] = {.lex_state = 12, .external_lex_state = 2},
  [31] = {.lex_state = 3, .external_lex_state = 2},
  [32] = {.lex_state = 3, .external_lex_state = 2},
  [33] = {.lex_state = 3, .external_lex_state = 2},
  [34] = {.lex_state = 3, .external_lex_state = 2},
  [35] = {.lex_state = 3, .external_lex_state = 2},
  [36] = {.lex_state = 4, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 2},
  [38] = {.lex_state = 4, .external_lex_state = 2},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 3, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 3, .external_lex_state = 2},
  [44] = {.lex_state = 3, .external_lex_state = 2},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 3, .external_lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 3, .external_lex_state = 2},
  [49] = {.lex_state = 3, .external_lex_state = 2},
  [50] = {.lex_state = 4, .external_lex_state = 2},
  [51] = {.lex_state = 4, .external_lex_state = 2},
  [52] = {.lex_state = 4, .external_lex_state = 2},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 4, .external_lex_state = 2},
  [56] = {.lex_state = 4, .external_lex_state = 2},
  [57] = {.lex_state = 4, .external_lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 4, .external_lex_state = 2},
  [60] = {.lex_state = 4, .external_lex_state = 2},
  [61] = {.lex_state = 4, .external_lex_state = 2},
  [62] = {.lex_state = 4, .external_lex_state = 2},
  [63] = {.lex_state = 4, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
};

enum {
  ts_external_token_raw_text = 0,
  ts_external_token_comment = 1,
  ts_external_token_raw_text_inline = 2,
  ts_external_token_raw_text_round = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_raw_text_inline] = sym_raw_text_inline,
  [ts_external_token_raw_text_round] = sym_raw_text_round,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_raw_text_inline] = true,
    [ts_external_token_raw_text_round] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_raw_text] = true,
  },
  [4] = {
    [ts_external_token_raw_text_round] = true,
  },
  [5] = {
    [ts_external_token_raw_text_inline] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_elseif2] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__start_tag_name_token1] = ACTIONS(1),
    [anon_sym_BSLASH_AT] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACE] = ACTIONS(1),
    [sym_unicode] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_raw_text_inline] = ACTIONS(1),
    [sym_raw_text_round] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(93),
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym_script_element] = STATE(3),
    [sym_start_tag] = STATE(72),
    [sym_script_start_tag] = STATE(100),
    [sym_style_element] = STATE(3),
    [sym_style_start_tag] = STATE(97),
    [sym_special_element] = STATE(3),
    [sym__special_element_start_tag] = STATE(80),
    [sym__text] = STATE(3),
    [sym_expression] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [aux_sym__text_token1] = ACTIONS(11),
    [anon_sym_BSLASH_AT] = ACTIONS(11),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH_RBRACE] = ACTIONS(11),
    [sym_unicode] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(72), 1,
      sym_start_tag,
    STATE(80), 1,
      sym__special_element_start_tag,
    STATE(97), 1,
      sym_style_start_tag,
    STATE(100), 1,
      sym_script_start_tag,
    ACTIONS(24), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
    STATE(2), 8,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_special_element,
      sym__text,
      sym_expression,
      aux_sym_document_repeat1,
  [43] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_start_tag,
    STATE(80), 1,
      sym__special_element_start_tag,
    STATE(97), 1,
      sym_style_start_tag,
    STATE(100), 1,
      sym_script_start_tag,
    ACTIONS(29), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
    STATE(2), 8,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_special_element,
      sym__text,
      sym_expression,
      aux_sym_document_repeat1,
  [86] = 12,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      anon_sym_TILDE,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(50), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(53), 1,
      sym_comment,
    STATE(32), 1,
      sym_attribute_name,
    STATE(48), 1,
      sym__gen_attribute,
    STATE(4), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [128] = 12,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_TILDE,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(70), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(72), 1,
      sym_comment,
    STATE(32), 1,
      sym_attribute_name,
    STATE(48), 1,
      sym__gen_attribute,
    STATE(4), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [170] = 12,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_TILDE,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(70), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(78), 1,
      sym_comment,
    STATE(32), 1,
      sym_attribute_name,
    STATE(48), 1,
      sym__gen_attribute,
    STATE(5), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [212] = 11,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      anon_sym_TILDE,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(92), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(94), 1,
      sym_comment,
    STATE(38), 1,
      sym_attribute_name,
    STATE(56), 1,
      sym__gen_attribute,
    STATE(11), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [251] = 11,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      anon_sym_TILDE,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(92), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_attribute_name,
    STATE(56), 1,
      sym__gen_attribute,
    STATE(11), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [290] = 11,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      anon_sym_TILDE,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(92), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      sym_comment,
    STATE(38), 1,
      sym_attribute_name,
    STATE(56), 1,
      sym__gen_attribute,
    STATE(8), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [329] = 11,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      anon_sym_TILDE,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(92), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      sym_comment,
    STATE(38), 1,
      sym_attribute_name,
    STATE(56), 1,
      sym__gen_attribute,
    STATE(7), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [368] = 11,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      anon_sym_TILDE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(121), 1,
      aux_sym_attribute_name_token1,
    ACTIONS(124), 1,
      sym_comment,
    STATE(38), 1,
      sym_attribute_name,
    STATE(56), 1,
      sym__gen_attribute,
    STATE(11), 6,
      sym_class_attribute,
      sym_id_attribute,
      sym_style_attribute,
      sym__attribute,
      sym_expression_attribute,
      aux_sym_start_tag_repeat1,
  [407] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_AT,
    STATE(72), 1,
      sym_start_tag,
    STATE(13), 4,
      sym_element,
      sym__text,
      sym_expression,
      aux_sym_element_repeat1,
    ACTIONS(131), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [437] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(129), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_start_tag,
    STATE(16), 4,
      sym_element,
      sym__text,
      sym_expression,
      aux_sym_element_repeat1,
    ACTIONS(135), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [467] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(129), 1,
      anon_sym_AT,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_start_tag,
    STATE(15), 4,
      sym_element,
      sym__text,
      sym_expression,
      aux_sym_element_repeat1,
    ACTIONS(139), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [497] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(129), 1,
      anon_sym_AT,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_start_tag,
    STATE(16), 4,
      sym_element,
      sym__text,
      sym_expression,
      aux_sym_element_repeat1,
    ACTIONS(135), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [527] = 7,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(151), 1,
      anon_sym_AT,
    STATE(72), 1,
      sym_start_tag,
    STATE(16), 4,
      sym_element,
      sym__text,
      sym_expression,
      aux_sym_element_repeat1,
    ACTIONS(154), 6,
      sym_comment,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [557] = 6,
    ACTIONS(157), 1,
      anon_sym_script,
    ACTIONS(159), 1,
      anon_sym_style,
    ACTIONS(163), 1,
      anon_sym_elseif2,
    ACTIONS(165), 1,
      aux_sym__start_tag_name_token1,
    STATE(6), 1,
      sym__start_tag_name,
    ACTIONS(161), 7,
      anon_sym_each,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_await,
      anon_sym_then,
      anon_sym_catch,
  [582] = 2,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [598] = 2,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [614] = 2,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [630] = 2,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [646] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [662] = 2,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 10,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [678] = 2,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [693] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [708] = 2,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [723] = 2,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [738] = 2,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [753] = 2,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [768] = 2,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 9,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LBRACE_RBRACE,
      anon_sym_AT,
      aux_sym__text_token1,
      anon_sym_BSLASH_AT,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASH_RBRACE,
      sym_unicode,
  [783] = 2,
    ACTIONS(219), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(221), 8,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [798] = 3,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(223), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(225), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [815] = 2,
    ACTIONS(229), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(231), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [829] = 2,
    ACTIONS(233), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(235), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [843] = 2,
    ACTIONS(189), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(187), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [857] = 2,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 8,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [871] = 2,
    ACTIONS(185), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(183), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [885] = 3,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_EQ,
    ACTIONS(225), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [901] = 2,
    ACTIONS(177), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(175), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [915] = 2,
    ACTIONS(239), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(241), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [929] = 2,
    ACTIONS(243), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(245), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [943] = 2,
    ACTIONS(247), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(249), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [957] = 2,
    ACTIONS(251), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(253), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [971] = 2,
    ACTIONS(255), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(257), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [985] = 2,
    ACTIONS(259), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(261), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [999] = 2,
    ACTIONS(263), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(265), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1013] = 2,
    ACTIONS(267), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(269), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1027] = 2,
    ACTIONS(271), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(273), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1041] = 2,
    ACTIONS(275), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(277), 7,
      sym_comment,
      anon_sym_LBRACE_RBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1055] = 2,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1068] = 2,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1081] = 2,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1094] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1107] = 7,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(283), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_expression,
    STATE(63), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [1130] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1143] = 2,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1156] = 2,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1169] = 7,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(293), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_expression,
    STATE(42), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [1192] = 2,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1205] = 2,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1218] = 2,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1231] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1244] = 2,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1257] = 2,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1270] = 2,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 7,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LPAREN_RPAREN,
      aux_sym_attribute_name_token1,
  [1283] = 5,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(283), 1,
      aux_sym_attribute_value_token1,
    STATE(62), 1,
      sym_expression,
    STATE(65), 1,
      sym_attribute_value,
  [1299] = 5,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(283), 1,
      aux_sym_attribute_value_token1,
    STATE(61), 1,
      sym_attribute_value,
    STATE(62), 1,
      sym_expression,
  [1315] = 5,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(293), 1,
      aux_sym_attribute_value_token1,
    STATE(33), 1,
      sym_expression,
    STATE(47), 1,
      sym_attribute_value,
  [1331] = 5,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(293), 1,
      aux_sym_attribute_value_token1,
    STATE(33), 1,
      sym_expression,
    STATE(46), 1,
      sym_attribute_value,
  [1347] = 3,
    ACTIONS(92), 1,
      aux_sym_attribute_name_token1,
    STATE(38), 1,
      sym_attribute_name,
    STATE(51), 1,
      sym__gen_attribute,
  [1357] = 3,
    ACTIONS(70), 1,
      aux_sym_attribute_name_token1,
    STATE(32), 1,
      sym_attribute_name,
    STATE(45), 1,
      sym__gen_attribute,
  [1367] = 2,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_LBRACE_RBRACE,
  [1374] = 2,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_LBRACE_RBRACE,
  [1381] = 2,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      sym_raw_text,
  [1388] = 2,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_quoted_attribute_value_token2,
  [1395] = 2,
    ACTIONS(311), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      aux_sym_quoted_attribute_value_token1,
  [1402] = 2,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      sym_raw_text_round,
  [1409] = 2,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_quoted_attribute_value_token2,
  [1416] = 2,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(325), 1,
      aux_sym_quoted_attribute_value_token1,
  [1423] = 2,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_LBRACE_RBRACE,
  [1430] = 2,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym_raw_text_round,
  [1437] = 2,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      sym_raw_text,
  [1444] = 2,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      sym_raw_text,
  [1451] = 2,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym_raw_text,
  [1458] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      sym_raw_text,
  [1465] = 2,
    ACTIONS(351), 1,
      aux_sym__start_tag_name_token1,
    STATE(6), 1,
      sym__start_tag_name,
  [1472] = 1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1476] = 1,
    ACTIONS(355), 1,
      sym_raw_text_inline,
  [1480] = 1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
  [1484] = 1,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [1488] = 1,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
  [1492] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
  [1496] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1500] = 1,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
  [1504] = 1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [1508] = 1,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
  [1512] = 1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
  [1516] = 1,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
  [1520] = 1,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
  [1524] = 1,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
  [1528] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 212,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 368,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 467,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 557,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 630,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 693,
  [SMALL_STATE(26)] = 708,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 753,
  [SMALL_STATE(30)] = 768,
  [SMALL_STATE(31)] = 783,
  [SMALL_STATE(32)] = 798,
  [SMALL_STATE(33)] = 815,
  [SMALL_STATE(34)] = 829,
  [SMALL_STATE(35)] = 843,
  [SMALL_STATE(36)] = 857,
  [SMALL_STATE(37)] = 871,
  [SMALL_STATE(38)] = 885,
  [SMALL_STATE(39)] = 901,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 929,
  [SMALL_STATE(42)] = 943,
  [SMALL_STATE(43)] = 957,
  [SMALL_STATE(44)] = 971,
  [SMALL_STATE(45)] = 985,
  [SMALL_STATE(46)] = 999,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1027,
  [SMALL_STATE(49)] = 1041,
  [SMALL_STATE(50)] = 1055,
  [SMALL_STATE(51)] = 1068,
  [SMALL_STATE(52)] = 1081,
  [SMALL_STATE(53)] = 1094,
  [SMALL_STATE(54)] = 1107,
  [SMALL_STATE(55)] = 1130,
  [SMALL_STATE(56)] = 1143,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1169,
  [SMALL_STATE(59)] = 1192,
  [SMALL_STATE(60)] = 1205,
  [SMALL_STATE(61)] = 1218,
  [SMALL_STATE(62)] = 1231,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1257,
  [SMALL_STATE(65)] = 1270,
  [SMALL_STATE(66)] = 1283,
  [SMALL_STATE(67)] = 1299,
  [SMALL_STATE(68)] = 1315,
  [SMALL_STATE(69)] = 1331,
  [SMALL_STATE(70)] = 1347,
  [SMALL_STATE(71)] = 1357,
  [SMALL_STATE(72)] = 1367,
  [SMALL_STATE(73)] = 1374,
  [SMALL_STATE(74)] = 1381,
  [SMALL_STATE(75)] = 1388,
  [SMALL_STATE(76)] = 1395,
  [SMALL_STATE(77)] = 1402,
  [SMALL_STATE(78)] = 1409,
  [SMALL_STATE(79)] = 1416,
  [SMALL_STATE(80)] = 1423,
  [SMALL_STATE(81)] = 1430,
  [SMALL_STATE(82)] = 1437,
  [SMALL_STATE(83)] = 1444,
  [SMALL_STATE(84)] = 1451,
  [SMALL_STATE(85)] = 1458,
  [SMALL_STATE(86)] = 1465,
  [SMALL_STATE(87)] = 1472,
  [SMALL_STATE(88)] = 1476,
  [SMALL_STATE(89)] = 1480,
  [SMALL_STATE(90)] = 1484,
  [SMALL_STATE(91)] = 1488,
  [SMALL_STATE(92)] = 1492,
  [SMALL_STATE(93)] = 1496,
  [SMALL_STATE(94)] = 1500,
  [SMALL_STATE(95)] = 1504,
  [SMALL_STATE(96)] = 1508,
  [SMALL_STATE(97)] = 1512,
  [SMALL_STATE(98)] = 1516,
  [SMALL_STATE(99)] = 1520,
  [SMALL_STATE(100)] = 1524,
  [SMALL_STATE(101)] = 1528,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(68),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(69),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(71),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(49),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(66),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(67),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(70),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(81),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(52),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(20),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(86),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(16),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_element, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_element, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_element, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_element, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_element, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_element, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gen_attribute, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gen_attribute, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_tag_name, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_tag_name, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gen_attribute, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gen_attribute, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_attribute, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_attribute, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_attribute, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_attribute, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_attribute, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_attribute, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_element_start_tag, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_element_start_tag, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sveltealt_external_scanner_create(void);
void tree_sitter_sveltealt_external_scanner_destroy(void *);
bool tree_sitter_sveltealt_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sveltealt_external_scanner_serialize(void *, char *);
void tree_sitter_sveltealt_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sveltealt(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_sveltealt_external_scanner_create,
      tree_sitter_sveltealt_external_scanner_destroy,
      tree_sitter_sveltealt_external_scanner_scan,
      tree_sitter_sveltealt_external_scanner_serialize,
      tree_sitter_sveltealt_external_scanner_deserialize,
    },
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
