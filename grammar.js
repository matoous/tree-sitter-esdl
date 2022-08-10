module.exports = grammar({
  name: 'esdl',

  extras: $ => [
    $.comment,
    $._whitespace,
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
        seq(':=', $.expr),
        $.declarations,
      )),
      optional(';'),
    ),
    
    property: $ => seq(
      optional(repeat($.modifier)),
      'property',
      field('name', $.identifier),
      optional($.extending),
      optional(seq('->', $.type)),
      optional(choice(
        seq(':=', $.expr),
        $.declarations,
      )),
      optional(';'),
    ),

    annotation: $ => seq(
      optional(repeat($.modifier)),
      'annotation',
      field('name', $.identifier),
      choice(
        seq(':=', $.expr),
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
        seq(':=', $.expr),
        block(
          seq('using', $.expr),
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
      parens($.expr),
      ';',
    ),

    uselang: $ => seq(
      'using',
      field('language', $.identifier, $.str),
    ),
    
    on: $ => seq(
      'on',
      parens($.expr),
    ),
    
    except: $ => seq(
      'except',
      parens($.expr),
    ),
    
    computed: $ => seq(
      field('name', $.identifier),
      ':=',
      $.expr,
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
        $.identifier, // value instead (or as well?)
        seq($.identifier, ':', $._scalar_type)
      )),
      ')',
    ),
    
    returnspec: $ => seq(
      optional(choice('set of', 'optional')),
      $.type,
    ),

    // TODO: This should be proper expression parsing.
    expr: $ => choice(
      $.str,
      $.identifier,
      // num
    ),
    
    // PRIMITIVES

    str: $ => /'.*'/,
    
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

function block (rule) {
  return seq('{', rule, '}')
}

function parens (rule) {
  return seq('(', rule, ')')
}

function delim (rule, delimiter = ',') {
  return seq(rule, repeat(seq(delimiter, rule)))
}

