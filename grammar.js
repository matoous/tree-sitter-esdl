module.exports = grammar({
  name: 'esdl',

  extras: $ => [
    $.comment,
    $._whitespace,
  ],

  rules: {
    source_file: $ => repeat($.module),
    
    module: $ => seq(
      'module',
      field('name', $.identifier),
      $.schema_declarations,
    ),

    schema_declarations: $ => seq(
      "{",
      repeat($.type),
      "}"
    ),

    type: $ => seq(
      optional('abstract'),
      'type',
      $.identifier,
      optional($.extends),
      $.declarations
    ),
    
    extends: $ => seq('extending', $.identifier),
    
    declarations: $ => seq(
      "{",
      repeat(
        choice(
          $.property,
          $.link
        )
      ),
      "}"
    ),
    
    property: $ => seq(
      optional(
        seq(
          choice(
            choice('required', 'optional'),
            choice('single', 'multi'),
            'abstract'
          )
        )
      ),
      'property',
      $.identifier,
      '->',
      $._type,
      ';',
    ),
    
    link: $ => seq(
      optional(
        seq(
          choice(
            choice('required', 'optional'),
            choice('single', 'multi'),
            'abstract'
          )
        )
      ),
      'link',
      $.identifier,
      '->',
      $.identifier,
      ';',
    ),

    _type: $ => choice(
      'str',
      'int64',
      $.identifier,
    ),

    identifier: $ => /[\w]+/,

    true: $ => "true",

    false: $ => "false",

    null: $ => "null",

    comment: $ => token(choice(
      seq('#', /.*/),
    )),

    _whitespace: $ => token(/\s/),
  }
});
