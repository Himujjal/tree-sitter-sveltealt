module.exports = grammar({
  name: "sveltealt",

  extras: ($) => [/\s+/],

  externals: ($) => [
    $.raw_text,
    $.comment,
    $.raw_text_inline,
    $.raw_text_round,
  ],

  rules: {
    document: ($) => repeat($._node),

    _node: ($) =>
      choice(
        $.comment,
        $._text,
        $.element,
        $.script_element,
        $.style_element,
        $.special_element
      ),

    element: ($) =>
      seq(
        $.start_tag,
        choice(
          seq("{", repeat(choice($._text, $.element, $.comment)), "}"),
          "{}"
        )
      ),

    script_element: ($) =>
      seq(
        alias($.script_start_tag, $.start_tag),
        "{",
        optional($.raw_text),
        "}"
      ),

    start_tag: ($) =>
      seq("@", alias($._start_tag_name, $.tag_name), repeat($._attribute)),

    script_start_tag: ($) =>
      seq(
        "@",
        alias(token.immediate("script"), $.tag_name),
        repeat($._attribute)
      ),

    style_element: ($) =>
      seq(
        alias($.style_start_tag, $.start_tag),
        "{",
        optional($.raw_text),
        "}"
      ),

    style_start_tag: ($) =>
      seq(
        "@",
        alias(token.immediate("style"), $.tag_name),
        repeat($._attribute)
      ),

    special_element: ($) =>
      seq(
        alias($._special_element_start_tag, $.start_tag),
        choice(
          seq("{", repeat(choice($._text, $.element, $.comment)), "}"),
          "{}"
        )
      ),

    _special_element_start_tag: ($) =>
      seq(
        "@",
        choice(
          alias("each", $.each_tag),
          alias("if", $.if_tag),
          alias("elseif", $.elseif_tag),
          alias("else if", $.elseif_tag),
          alias("else", $.else_tag),
          alias("await", $.await_tag),
          alias("then", $.then_tag),
          alias("catch", $.catch_tag)
        ),
        alias($.raw_text_inline, $.raw_text)
      ),

    class_attribute: ($) => seq(".", $.attribute_value),
    id_attribute: ($) => seq("#", $.attribute_value),
    style_attribute: ($) => seq("~", $._gen_attribute),

    _attribute: ($) =>
      choice(
        $.comment,
        $.class_attribute,
        $.id_attribute,
        $.style_attribute,
        $.expression_attribute,
        alias($._gen_attribute, $.attribute)
      ),

    _gen_attribute: ($) =>
      seq(
        $.attribute_name,
        optional(seq("=", choice($.attribute_value, $.quoted_attribute_value)))
      ),

    expression_attribute: ($) =>
      choice(
        seq("(", optional(alias($.raw_text_round, $.raw_text)), ")"),
        "()"
      ),

    attribute_name: ($) => seq(/[^.#~{}()"'/=\s]+/),
    attribute_value: ($) => choice(/[^{}"'=\s]+/, $.expression),

    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
      ),

    _start_tag_name: ($) => seq(/[a-zA-Z][-:a-zA-Z0-9]*/),

    _text: ($) =>
      choice(
        $.unicode,
        alias(choice(/[^@{}\s\\\/]+/, "\\@", "\\{", "\\}"), $.text),
        $.expression
      ),

    expression: ($) => choice(seq("{", optional($.raw_text), "}"), "{}"),

    unicode: ($) => /\\[uU][a-fA-F0-9]+/,
  },
});
