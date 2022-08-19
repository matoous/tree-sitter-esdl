module.exports = grammar({
  name: 'esdl',

  extras: $ => [
    $.comment,
    $._whitespace,
  ],

  precedences: $ => [
    [
      'member',
      'call',
      // $.update_expression,
      'unary_void',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_shift',
      'binary_compare',
      'binary_relation',
      'binary_equality',
      'bitwise_and',
      'bitwise_xor',
      'bitwise_or',
      'logical_and',
      'logical_or',
      'ternary',
      // $.sequence_expression,
      // $.arrow_function
    ],
    // ['assign', $.primary_expression],
    ['member', 'new', 'call', $.expression],
    ['declaration', 'literal'],
    // [$.primary_expression, $.statement_block, 'object'],
  ],

  rules: {
    source_file: $ => repeat($.module),
    
    // MODULES
    module: $ => seq(
      'module',
      field('name', $.identifier),
      $.schema_declarations,
    ),

    schema_declarations: $ => seq(
      block(
        repeat(choice(
          $.object_type,
          $.scalar_type_def,
          $.link,
          $.property,
          $.annotation,
          $.constraint,
          $.function,
          $.alias,
        )),
      ),
    ),

    // SCHEMAS

    object_type: $ => seq(
      optional($.modifier),
      'type',
      field('name', $.identifier),
      optional($.extending),
      $.declarations
    ),
    
    declarations: $ => block(
      repeat(
        choice(
          $.property,
          $.link,
          $.annotation,
          $.constraint,
          $.index,
        ),
      ),
    ),

    scalar_type_def: $ => seq(
      optional(repeat($.modifier)),
      'scalar',
      'type',
      field('name', $.identifier),
      optional($.extending),
      optional($.declarations),
    ),
        
    link: $ => seq(
      optional(repeat($.modifier)),
      'link',
      field('name', $.identifier),
      optional($.extending),
      optional(seq('->', $.type)),
      optional(choice(
        seq(':=', $.expression),
        $.declarations,
      )),
      optional(';'),
    ),
    
    property: $ => seq(
      optional(repeat($.modifier)),
      'property',
      field('name', $.identifier),
      choice(
        seq(
          optional($.extending),
          optional(seq('->', $.type)),
        ),
        optional(choice(
          seq(':=', $.expression),
          $.declarations,
        )),
      ),
      optional(';'),
    ),

    annotation: $ => seq(
      optional(repeat($.modifier)),
      'annotation',
      field('name', $.identifier),
      choice(
        seq(':=', $.expression),
        repeat($.annotation),
      ),
      ';',
    ),
    
    constraint: $ => seq(
      optional($.modifier),
      'constraint',
      field('name', $.identifier),
      optional($.argspec),
      optional($.on),
      optional($.except),
      optional($.extending),
      optional(block(
        repeat(choice(
          $.using,
          $.computed,
          $.annotation,
        )),
      )),
      ';',
    ),
    
    index: $ => seq(
      'index',
      $.on,
      optional($.except),
      optional(block(repeat(
        $.annotation,
      ))),
      ';'
    ),
    
    alias: $ => seq(
      'alias',
      field('name', $.identifier),
      choice(
        seq(':=', $.expression),
        block(
          seq('using', $.expression),
          optional(repeat($.annotation))
        ),
      ),
      ';'
    ),
    
    function: $ => seq(
      'function',
      field('name', $.identifier),
      '(',
      optional($.argspec),
      ')',
      '->',
      $.returnspec,
      optional(choice(
        seq('using', '(', 'edgedb', ')'),
        $.uselang,
      )),
      optional(block(repeat(choice(
        $.annotation,
        $.computed,
        $.using,
        $.uselang,
      )))),
      ';'
    ),
    
    extension: $ => seq(
      'using',
      'extension',
      field('name', $.identifier),
      ';',
    ),
    
    // PARTS

    extending: $ => seq('extending', delim(
      field('supertype', choice(
        $.enum,
        $.type,
      )),
    )),
    
    using: $ => seq(
      'using',
      parens($.expression),
      ';',
    ),

    uselang: $ => seq(
      'using',
      field('language', $.identifier, $.string),
    ),
    
    on: $ => seq(
      'on',
      parens($.expression),
    ),
    
    except: $ => seq(
      'except',
      parens($.expression),
    ),
    
    computed: $ => seq(
      field('name', $.identifier),
      ':=',
      $.expression,
      ';'
    ),
    
    modifier: $ => choice(
      'abstract',
      'overloaded',
      choice('required', 'optional'),
      choice('single', 'multi'),
      'inheritable',
    ),

    argspec: $ => seq(
      '(',
      delim(choice(
        $.expression, // value instead (or as well?)
        seq($.identifier, ':', $._scalar_type)
      )),
      ')',
    ),
    
    returnspec: $ => seq(
      optional(choice('set of', 'optional')),
      $.type,
    ),

    // TODO: This should be proper expression parsing.
    expression: $ => choice(
      $.string,
      $.true,
      $.false,
      $.null,
      $.identifier,
      seq('global', $.identifier),
      $.fncall,
      $.binary_expression,
      parens($.expression),
    ),
    
    fncall: $ => seq(
      field('name', $.identifier),
      '(',
      optional(delim($.expression)),
      ')',
    ),
    
    binary_expression: $ => choice(
      ...[
        ['&&', 'logical_and'],
        ['||', 'logical_or'],
        ['>>', 'binary_shift'],
        ['<<', 'binary_shift'],
        ['&', 'bitwise_and'],
        ['^', 'bitwise_xor'],
        ['|', 'bitwise_or'],
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['=', 'binary_equality'],
        ['!=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
      ].map(([operator, precedence, associativity]) =>
        (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
          field('left', $.expression),
          field('operator', operator),
          field('right', $.expression)
        ))
      )
    ),
    
    // PRIMITIVES

    string: $ => seq(
      "'",
      repeat(choice(
        alias($.unescaped_single_string_fragment, $.string_fragment),
        $.escape_sequence
      )),
      "'"
    ),
    
    unescaped_single_string_fragment: $ =>
      token.immediate(prec(1, /[^'\\]+/)),
    
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),
    
    _scalar_type: $ => choice(
      'str',
      'bool',
      'int16',
      'int32',
      'int64',
      'float32',
      'float64',
      'bigint',
      'decimal',
      'json',
      'uuid',
      'bytes',
      'datetime',
      'duration',
      'cal::local_datetime',
      'cal::local_date',
      'cal::local_time',
      'cal::relative_duration',
      'sequence',
      'anytype',
    ),
    
    array: $ => seq(
      'array',
      '<',
      $.type,
      '>'
    ),

    tuple: $ => choice(
      $._tuple,
      $._named_tuple,
    ),

    _tuple: $ => seq(
      'tuple',
      '<',
      delim($.type),
      '>'
    ),

    _named_tuple: $ => seq(
      'tuple',
      '<',
      delim(
        seq(
          $.identifier,
          ':',
          $.type,
        )
      ),
      '>'
    ),
    
    enum: $ => seq(
      'scalar type',
      seq(
        'enum',
        '<',
        delim($.identifier),
        '>',
      )       
    ),

    type: $ => choice(
      $._scalar_type,
      $.identifier,
      $.array,
      $.tuple,
    ),

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(
        // __subject__ shorthand
        optional('.'),
        alpha,
        repeat(alphanumeric),
      ))
    },

    true: $ => "true",
    false: $ => "false",
    null: $ => "null",

    comment: $ => token(choice(
      seq('#', /.*/),
    )),

    _whitespace: $ => token(/\s/),
  }
});

function block (rule) {
  return seq('{', rule, '}')
}

function parens (rule) {
  return seq('(', rule, ')')
}

function delim (rule, delimiter = ',') {
  return seq(rule, repeat(seq(delimiter, rule)))
}

