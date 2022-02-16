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
        repeat($.object_type),
      )
    ),

    // SCHEMAS
    object_type: $ => seq(
      optional(repeat($.modifier)),
      'type',
      $.identifier,
      optional($.extends),
      $.declarations
    ),
    
    extends: $ => seq('extending', commaSep($.identifier)),
    
    declarations: $ => seq(
      block(
        repeat(
          choice(
            $.property,
            $.link
          )
        )
      )
    ),
    
    modifier: $ => choice(
      choice('required', 'optional'),
      choice('single', 'multi'),
      choice('abstract', 'delegated'),
      'inheritable',
    ),

    argspec: $ => commaSep(
      choice(
        $.identifier, // value instead (or as well?)
        seq($.identifier, ':', $._scalar_type)
      )
    ),
    
    // TODO
    subj_expr: $ => '__subject__',
    // TODO
    constr_expr: $ => '__subject__',

    val: $ => choice(
      $.str,
      $.identifier,
      // num
    ),
    
    // ANNOTATION
    annotation: $ => choice(
      $._abstract_annotation,
      $._concrete_annotation,
    ),
    
    _concrete_annotation: $ => seq(
      'annotation',
      $.identifier,
      ':=',
      $.val,
      ';',
    ),
        
    _abstract_annotation: $ => seq(
      optional(repeat($.modifier)),
      'annotation',
      $.identifier,
      optional(
        block(
          repeat($.annotation),
        )
      ),
      ";",
    ),
    
    // PROPERTIES
    property: $ => seq(
      optional(repeat($.modifier)),
      'property',
      $.identifier,
      '->',
      $.type,
      ';',
    ),
    
    // LINKS
    link: $ => seq(
      optional(repeat($.modifier)),
      'link',
      $.identifier,
      '->',
      $.identifier,
      ';',
    ),
    
    // CONSTRAIN
    contraint: $ => seq(
      optional($.modifier),
      'contraint',
      $.identifier,
      optional($.argspec),
      optional(seq('on', $.subj_expr)),
      optional($.extends),
      block(
        repeat(
          choice(
            seq('using', $.constr_expr),
            seq('errmessage', ':=', $.str)
          )
        )
      )
    ),
    
    str: $ => /'.*'/,
    
    // PRIMITIVES
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
      commaSep($.type),
      '>'
    ),

    _named_tuple: $ => seq(
      'tuple',
      '<',
      commaSep(
        seq(
          $.identifier,
          ':',
          $.type,
        )
      ),
      '>'
    ),

    scalar_type_def: $ => seq(
      optional($.modifier),
      'scalar type',
      $.identifier,
      optional(
        seq(
          'extending',
          commaSep(
            field('supertype', choice(
              $.enum,
              $.type
            )),
          ),
        ),
      ),
      optional(
        block('TODO')
      )
    ),
    
    enum: $ => seq(
      'scalar type',
      seq(
        'enum',
        '<',
        commaSep($.identifier),
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

function commaSep (rule) {
  return seq(rule, repeat(seq(",", rule)))
}

