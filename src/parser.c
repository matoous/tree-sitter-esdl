#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 402
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_type = 4,
  anon_sym_scalar = 5,
  anon_sym_link = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_SEMI = 9,
  anon_sym_property = 10,
  anon_sym_annotation = 11,
  anon_sym_constraint = 12,
  anon_sym_index = 13,
  anon_sym_alias = 14,
  anon_sym_using = 15,
  anon_sym_function = 16,
  anon_sym_extension = 17,
  anon_sym_extending = 18,
  anon_sym_COMMA = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_on = 22,
  anon_sym_except = 23,
  anon_sym_abstract = 24,
  anon_sym_overloaded = 25,
  anon_sym_required = 26,
  anon_sym_optional = 27,
  anon_sym_single = 28,
  anon_sym_multi = 29,
  anon_sym_inheritable = 30,
  anon_sym_COLON = 31,
  anon_sym_setof = 32,
  anon_sym_global = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_GT_GT = 36,
  anon_sym_LT_LT = 37,
  anon_sym_AMP = 38,
  anon_sym_CARET = 39,
  anon_sym_PIPE = 40,
  anon_sym_PLUS = 41,
  anon_sym_DASH = 42,
  anon_sym_STAR = 43,
  anon_sym_SLASH = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT_EQ = 50,
  anon_sym_GT = 51,
  anon_sym_SQUOTE = 52,
  sym_unescaped_single_string_fragment = 53,
  sym_escape_sequence = 54,
  anon_sym_str = 55,
  anon_sym_bool = 56,
  anon_sym_int16 = 57,
  anon_sym_int32 = 58,
  anon_sym_int64 = 59,
  anon_sym_float32 = 60,
  anon_sym_float64 = 61,
  anon_sym_bigint = 62,
  anon_sym_decimal = 63,
  anon_sym_json = 64,
  anon_sym_uuid = 65,
  anon_sym_bytes = 66,
  anon_sym_datetime = 67,
  anon_sym_duration = 68,
  anon_sym_cal_COLON_COLONlocal_datetime = 69,
  anon_sym_cal_COLON_COLONlocal_date = 70,
  anon_sym_cal_COLON_COLONlocal_time = 71,
  anon_sym_cal_COLON_COLONrelative_duration = 72,
  anon_sym_sequence = 73,
  anon_sym_anytype = 74,
  anon_sym_array = 75,
  anon_sym_tuple = 76,
  anon_sym_scalartype = 77,
  anon_sym_enum = 78,
  sym_identifier = 79,
  sym_true = 80,
  sym_false = 81,
  sym_null = 82,
  sym_number = 83,
  sym_comment = 84,
  sym__whitespace = 85,
  sym__edgeql_chars = 86,
  sym_source_file = 87,
  sym_module = 88,
  sym_schema_declarations = 89,
  sym_object_type = 90,
  sym_declarations = 91,
  sym_scalar_type_def = 92,
  sym_link = 93,
  sym_property = 94,
  sym_annotation = 95,
  sym_constraint = 96,
  sym_index = 97,
  sym_alias = 98,
  sym_function = 99,
  sym_extending = 100,
  sym_using = 101,
  sym_on = 102,
  sym_except = 103,
  sym_computed = 104,
  sym_modifier = 105,
  sym_argspec = 106,
  sym_returnspec = 107,
  sym_expression = 108,
  sym_fncall = 109,
  sym_binary_expression = 110,
  sym_string = 111,
  sym__scalar_type = 112,
  sym_array = 113,
  sym_tuple = 114,
  sym__tuple = 115,
  sym__named_tuple = 116,
  sym_enum = 117,
  sym_type = 118,
  aux_sym_source_file_repeat1 = 119,
  aux_sym_schema_declarations_repeat1 = 120,
  aux_sym_declarations_repeat1 = 121,
  aux_sym_scalar_type_def_repeat1 = 122,
  aux_sym_annotation_repeat1 = 123,
  aux_sym_constraint_repeat1 = 124,
  aux_sym_function_repeat1 = 125,
  aux_sym_extending_repeat1 = 126,
  aux_sym_argspec_repeat1 = 127,
  aux_sym_fncall_repeat1 = 128,
  aux_sym_string_repeat1 = 129,
  aux_sym__tuple_repeat1 = 130,
  aux_sym__named_tuple_repeat1 = 131,
  aux_sym_enum_repeat1 = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_scalar] = "scalar",
  [anon_sym_link] = "link",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_property] = "property",
  [anon_sym_annotation] = "annotation",
  [anon_sym_constraint] = "constraint",
  [anon_sym_index] = "index",
  [anon_sym_alias] = "alias",
  [anon_sym_using] = "using",
  [anon_sym_function] = "function",
  [anon_sym_extension] = "extension",
  [anon_sym_extending] = "extending",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_on] = "on",
  [anon_sym_except] = "except",
  [anon_sym_abstract] = "abstract",
  [anon_sym_overloaded] = "overloaded",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
  [anon_sym_inheritable] = "inheritable",
  [anon_sym_COLON] = ":",
  [anon_sym_setof] = "set of",
  [anon_sym_global] = "global",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_str] = "str",
  [anon_sym_bool] = "bool",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_bigint] = "bigint",
  [anon_sym_decimal] = "decimal",
  [anon_sym_json] = "json",
  [anon_sym_uuid] = "uuid",
  [anon_sym_bytes] = "bytes",
  [anon_sym_datetime] = "datetime",
  [anon_sym_duration] = "duration",
  [anon_sym_cal_COLON_COLONlocal_datetime] = "cal::local_datetime",
  [anon_sym_cal_COLON_COLONlocal_date] = "cal::local_date",
  [anon_sym_cal_COLON_COLONlocal_time] = "cal::local_time",
  [anon_sym_cal_COLON_COLONrelative_duration] = "cal::relative_duration",
  [anon_sym_sequence] = "sequence",
  [anon_sym_anytype] = "anytype",
  [anon_sym_array] = "array",
  [anon_sym_tuple] = "tuple",
  [anon_sym_scalartype] = "scalar type",
  [anon_sym_enum] = "enum",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__edgeql_chars] = "edgeql_fragment",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_schema_declarations] = "schema_declarations",
  [sym_object_type] = "object_type",
  [sym_declarations] = "declarations",
  [sym_scalar_type_def] = "scalar_type_def",
  [sym_link] = "link",
  [sym_property] = "property",
  [sym_annotation] = "annotation",
  [sym_constraint] = "constraint",
  [sym_index] = "index",
  [sym_alias] = "alias",
  [sym_function] = "function",
  [sym_extending] = "extending",
  [sym_using] = "using",
  [sym_on] = "on",
  [sym_except] = "except",
  [sym_computed] = "computed",
  [sym_modifier] = "modifier",
  [sym_argspec] = "argspec",
  [sym_returnspec] = "returnspec",
  [sym_expression] = "expression",
  [sym_fncall] = "fncall",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym__scalar_type] = "_scalar_type",
  [sym_array] = "array",
  [sym_tuple] = "tuple",
  [sym__tuple] = "_tuple",
  [sym__named_tuple] = "_named_tuple",
  [sym_enum] = "enum",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_scalar_type_def_repeat1] = "scalar_type_def_repeat1",
  [aux_sym_annotation_repeat1] = "annotation_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_extending_repeat1] = "extending_repeat1",
  [aux_sym_argspec_repeat1] = "argspec_repeat1",
  [aux_sym_fncall_repeat1] = "fncall_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__tuple_repeat1] = "_tuple_repeat1",
  [aux_sym__named_tuple_repeat1] = "_named_tuple_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_scalar] = anon_sym_scalar,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_overloaded] = anon_sym_overloaded,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_inheritable] = anon_sym_inheritable,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_setof] = anon_sym_setof,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_single_string_fragment] = sym_unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_bigint] = anon_sym_bigint,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_cal_COLON_COLONlocal_datetime] = anon_sym_cal_COLON_COLONlocal_datetime,
  [anon_sym_cal_COLON_COLONlocal_date] = anon_sym_cal_COLON_COLONlocal_date,
  [anon_sym_cal_COLON_COLONlocal_time] = anon_sym_cal_COLON_COLONlocal_time,
  [anon_sym_cal_COLON_COLONrelative_duration] = anon_sym_cal_COLON_COLONrelative_duration,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_anytype] = anon_sym_anytype,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_scalartype] = anon_sym_scalartype,
  [anon_sym_enum] = anon_sym_enum,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__edgeql_chars] = sym__edgeql_chars,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_schema_declarations] = sym_schema_declarations,
  [sym_object_type] = sym_object_type,
  [sym_declarations] = sym_declarations,
  [sym_scalar_type_def] = sym_scalar_type_def,
  [sym_link] = sym_link,
  [sym_property] = sym_property,
  [sym_annotation] = sym_annotation,
  [sym_constraint] = sym_constraint,
  [sym_index] = sym_index,
  [sym_alias] = sym_alias,
  [sym_function] = sym_function,
  [sym_extending] = sym_extending,
  [sym_using] = sym_using,
  [sym_on] = sym_on,
  [sym_except] = sym_except,
  [sym_computed] = sym_computed,
  [sym_modifier] = sym_modifier,
  [sym_argspec] = sym_argspec,
  [sym_returnspec] = sym_returnspec,
  [sym_expression] = sym_expression,
  [sym_fncall] = sym_fncall,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym__scalar_type] = sym__scalar_type,
  [sym_array] = sym_array,
  [sym_tuple] = sym_tuple,
  [sym__tuple] = sym__tuple,
  [sym__named_tuple] = sym__named_tuple,
  [sym_enum] = sym_enum,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_scalar_type_def_repeat1] = aux_sym_scalar_type_def_repeat1,
  [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_extending_repeat1] = aux_sym_extending_repeat1,
  [aux_sym_argspec_repeat1] = aux_sym_argspec_repeat1,
  [aux_sym_fncall_repeat1] = aux_sym_fncall_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__tuple_repeat1] = aux_sym__tuple_repeat1,
  [aux_sym__named_tuple_repeat1] = aux_sym__named_tuple_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overloaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_single] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inheritable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bigint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONlocal_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal_COLON_COLONrelative_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anytype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalartype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__edgeql_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_extending] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_except] = {
    .visible = true,
    .named = true,
  },
  [sym_computed] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_argspec] = {
    .visible = true,
    .named = true,
  },
  [sym_returnspec] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_fncall] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar_type] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple] = {
    .visible = false,
    .named = true,
  },
  [sym__named_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scalar_type_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extending_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argspec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fncall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__named_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_language = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_right = 5,
  field_supertype = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_supertype] = "supertype",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_supertype, 1},
  [3] =
    {field_name, 3},
  [4] =
    {field_supertype, 1},
    {field_supertype, 2, .inherited = true},
  [6] =
    {field_supertype, 0, .inherited = true},
    {field_supertype, 1, .inherited = true},
  [8] =
    {field_name, 0},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [12] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [2] = sym__edgeql_chars,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 88,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 201,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 215,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 227,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 226,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 111,
  [259] = 100,
  [260] = 260,
  [261] = 112,
  [262] = 191,
  [263] = 188,
  [264] = 104,
  [265] = 123,
  [266] = 110,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 270,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 318,
  [327] = 323,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 322,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 352,
  [392] = 346,
  [393] = 360,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 362,
  [400] = 373,
  [401] = 401,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 160
    ? (c < ';'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(333);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '%') ADVANCE(509);
      if (lookahead == '&') ADVANCE(321);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '*') ADVANCE(509);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == '.') ADVANCE(505);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == ';') ADVANCE(509);
      if (lookahead == '<') ADVANCE(331);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '>') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '^') ADVANCE(509);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'b') ADVANCE(395);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'j') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 's') ADVANCE(362);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '{') ADVANCE(509);
      if (lookahead == '|') ADVANCE(498);
      if (lookahead == '}') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(714);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(573);
      if (lookahead == 'g') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(709);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(709);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(296);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'j') ADVANCE(680);
      if (lookahead == 'o') ADVANCE(664);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(709);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'j') ADVANCE(680);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(709);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(611);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'j') ADVANCE(680);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == 'u') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(709);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(683);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(709);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(519);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(523);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(521);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(525);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(517);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(264);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(709);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(709);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(533);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 177:
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 178:
      if (lookahead == 'q') ADVANCE(227);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 231:
      if (lookahead == 'x') ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 236:
      if (lookahead == '{') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 237:
      if (lookahead == '{') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      END_STATE();
    case 241:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(716);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(717);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(709);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(720);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '%') ADVANCE(310);
      if (lookahead == '&') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == ')') ADVANCE(279);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '+') ADVANCE(306);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == ':') ADVANCE(296);
      if (lookahead == ';') ADVANCE(266);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'j') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(724);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_scalar);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_single);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_multi);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(299);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(302);
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '>') ADVANCE(301);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '&') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '0') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(508);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == 'n') ADVANCE(509);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '_') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '1') ADVANCE(328);
      if (lookahead == '3') ADVANCE(325);
      if (lookahead == '6') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '3') ADVANCE(325);
      if (lookahead == '6') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '4') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '6') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '<') ADVANCE(509);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '>') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '>') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(502);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'k') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 'x') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'y') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(493);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'v') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'x') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '|') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '_') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(510);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(511);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(561);
      if (lookahead == '3') ADVANCE(556);
      if (lookahead == '6') ADVANCE(559);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(520);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(557);
      if (lookahead == '6') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(526);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(518);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(709);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(579);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(624);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(588);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(706);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(672);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(583);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(626);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(686);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(627);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(631);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(633);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(629);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(673);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(693);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'a') ADVANCE(696);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(651);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(637);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(574);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(613);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(593);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(688);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 't') ADVANCE(670);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(534);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(287);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(285);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(603);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == 't') ADVANCE(670);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(550);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(548);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(538);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(546);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 't') ADVANCE(670);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(291);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(295);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(710);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(711);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(679);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(586);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(649);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(678);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(587);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(675);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(669);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(692);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(274);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(623);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(636);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(604);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 'y') ADVANCE(684);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(585);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(641);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(293);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(640);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(657);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(658);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(676);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(661);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(647);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(650);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(694);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(652);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(562);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(516);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(530);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(289);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(712);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(298);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(662);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(567);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(590);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(682);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(655);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(628);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(595);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(596);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(659);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(695);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(592);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(569);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead == 'r') ADVANCE(671);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(532);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(540);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(610);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(269);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(609);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(685);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(582);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(607);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(660);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(687);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(571);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(643);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(580);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(625);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(653);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(644);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(565);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(698);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(646);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(570);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(691);
      if (lookahead == 'v') ADVANCE(602);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(691);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(632);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(591);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(701);
      if (lookahead == 't') ADVANCE(553);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(701);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(703);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(514);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(566);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(554);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(576);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(568);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(622);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(600);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(705);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(638);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 's') ADVANCE(536);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 's') ADVANCE(654);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 's') ADVANCE(697);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 's') ADVANCE(598);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 's') ADVANCE(621);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(599);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(555);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(558);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(528);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(283);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(707);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(606);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(616);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(615);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(617);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(563);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(614);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(619);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(674);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 't') ADVANCE(577);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(612);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(665);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(601);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(639);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(618);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(635);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(597);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(549);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(666);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(689);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(226);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(709);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == '0') ADVANCE(718);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(241);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(251);
      if (lookahead == '_') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(713);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == '_') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == '_') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 256},
  [2] = {.lex_state = 256},
  [3] = {.lex_state = 256},
  [4] = {.lex_state = 256},
  [5] = {.lex_state = 256},
  [6] = {.lex_state = 256},
  [7] = {.lex_state = 256},
  [8] = {.lex_state = 256},
  [9] = {.lex_state = 256},
  [10] = {.lex_state = 256},
  [11] = {.lex_state = 256},
  [12] = {.lex_state = 256},
  [13] = {.lex_state = 256},
  [14] = {.lex_state = 256},
  [15] = {.lex_state = 256},
  [16] = {.lex_state = 256},
  [17] = {.lex_state = 256},
  [18] = {.lex_state = 256},
  [19] = {.lex_state = 256},
  [20] = {.lex_state = 256},
  [21] = {.lex_state = 256},
  [22] = {.lex_state = 256},
  [23] = {.lex_state = 256},
  [24] = {.lex_state = 256},
  [25] = {.lex_state = 256},
  [26] = {.lex_state = 256},
  [27] = {.lex_state = 256},
  [28] = {.lex_state = 256},
  [29] = {.lex_state = 256},
  [30] = {.lex_state = 256},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 256},
  [49] = {.lex_state = 256},
  [50] = {.lex_state = 256},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 256},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 256},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 256},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 256},
  [77] = {.lex_state = 256},
  [78] = {.lex_state = 256},
  [79] = {.lex_state = 256},
  [80] = {.lex_state = 256},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 256},
  [83] = {.lex_state = 256},
  [84] = {.lex_state = 256},
  [85] = {.lex_state = 256},
  [86] = {.lex_state = 256},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 256},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 256},
  [91] = {.lex_state = 256},
  [92] = {.lex_state = 256},
  [93] = {.lex_state = 256},
  [94] = {.lex_state = 256},
  [95] = {.lex_state = 256},
  [96] = {.lex_state = 256},
  [97] = {.lex_state = 256},
  [98] = {.lex_state = 256},
  [99] = {.lex_state = 256},
  [100] = {.lex_state = 256},
  [101] = {.lex_state = 256},
  [102] = {.lex_state = 256},
  [103] = {.lex_state = 256},
  [104] = {.lex_state = 256},
  [105] = {.lex_state = 256},
  [106] = {.lex_state = 256},
  [107] = {.lex_state = 256},
  [108] = {.lex_state = 256},
  [109] = {.lex_state = 256},
  [110] = {.lex_state = 256},
  [111] = {.lex_state = 256},
  [112] = {.lex_state = 256},
  [113] = {.lex_state = 256},
  [114] = {.lex_state = 256},
  [115] = {.lex_state = 256},
  [116] = {.lex_state = 256},
  [117] = {.lex_state = 256},
  [118] = {.lex_state = 256},
  [119] = {.lex_state = 256},
  [120] = {.lex_state = 256},
  [121] = {.lex_state = 256},
  [122] = {.lex_state = 256},
  [123] = {.lex_state = 256},
  [124] = {.lex_state = 256},
  [125] = {.lex_state = 256},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 256},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 256},
  [131] = {.lex_state = 256},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 256},
  [134] = {.lex_state = 256},
  [135] = {.lex_state = 256},
  [136] = {.lex_state = 256},
  [137] = {.lex_state = 256},
  [138] = {.lex_state = 256},
  [139] = {.lex_state = 256},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 256},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 256},
  [147] = {.lex_state = 256},
  [148] = {.lex_state = 256},
  [149] = {.lex_state = 256},
  [150] = {.lex_state = 256},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 256},
  [153] = {.lex_state = 256},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 256},
  [156] = {.lex_state = 256},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 256},
  [159] = {.lex_state = 256},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 256},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 256},
  [167] = {.lex_state = 256},
  [168] = {.lex_state = 256},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 256},
  [174] = {.lex_state = 256},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 256},
  [178] = {.lex_state = 256},
  [179] = {.lex_state = 256},
  [180] = {.lex_state = 256},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 256},
  [183] = {.lex_state = 256},
  [184] = {.lex_state = 256},
  [185] = {.lex_state = 256},
  [186] = {.lex_state = 256},
  [187] = {.lex_state = 256},
  [188] = {.lex_state = 256},
  [189] = {.lex_state = 256},
  [190] = {.lex_state = 256},
  [191] = {.lex_state = 256},
  [192] = {.lex_state = 256},
  [193] = {.lex_state = 256},
  [194] = {.lex_state = 256},
  [195] = {.lex_state = 256},
  [196] = {.lex_state = 256},
  [197] = {.lex_state = 256},
  [198] = {.lex_state = 256},
  [199] = {.lex_state = 256},
  [200] = {.lex_state = 256},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 256},
  [206] = {.lex_state = 256},
  [207] = {.lex_state = 256},
  [208] = {.lex_state = 256},
  [209] = {.lex_state = 256},
  [210] = {.lex_state = 256},
  [211] = {.lex_state = 256},
  [212] = {.lex_state = 256},
  [213] = {.lex_state = 256},
  [214] = {.lex_state = 256},
  [215] = {.lex_state = 256},
  [216] = {.lex_state = 256},
  [217] = {.lex_state = 256},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 256},
  [220] = {.lex_state = 256},
  [221] = {.lex_state = 256},
  [222] = {.lex_state = 256},
  [223] = {.lex_state = 256},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 256},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 256},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 256},
  [269] = {.lex_state = 256},
  [270] = {.lex_state = 256},
  [271] = {.lex_state = 256},
  [272] = {.lex_state = 256},
  [273] = {.lex_state = 256},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 256},
  [278] = {.lex_state = 256},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 256},
  [282] = {.lex_state = 256},
  [283] = {.lex_state = 256},
  [284] = {.lex_state = 256},
  [285] = {.lex_state = 256},
  [286] = {.lex_state = 256},
  [287] = {.lex_state = 256},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 256},
  [290] = {.lex_state = 256},
  [291] = {.lex_state = 256},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 256},
  [294] = {.lex_state = 256},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 256},
  [297] = {.lex_state = 256},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 256},
  [304] = {.lex_state = 256},
  [305] = {.lex_state = 256},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 256},
  [310] = {.lex_state = 256},
  [311] = {.lex_state = 256},
  [312] = {.lex_state = 256},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 256},
  [316] = {.lex_state = 256},
  [317] = {.lex_state = 256},
  [318] = {.lex_state = 256, .external_lex_state = 1},
  [319] = {.lex_state = 256},
  [320] = {.lex_state = 256},
  [321] = {.lex_state = 256},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 256},
  [324] = {.lex_state = 256},
  [325] = {.lex_state = 256},
  [326] = {.lex_state = 256, .external_lex_state = 1},
  [327] = {.lex_state = 256},
  [328] = {.lex_state = 256},
  [329] = {.lex_state = 256},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 256},
  [332] = {.lex_state = 256},
  [333] = {.lex_state = 256},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 256},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 256},
  [339] = {.lex_state = 256},
  [340] = {.lex_state = 256},
  [341] = {.lex_state = 256},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 256},
  [344] = {.lex_state = 256},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 256},
  [347] = {.lex_state = 256},
  [348] = {.lex_state = 256},
  [349] = {.lex_state = 256},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 256},
  [353] = {.lex_state = 256},
  [354] = {.lex_state = 3},
  [355] = {.lex_state = 3},
  [356] = {.lex_state = 256},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 3},
  [359] = {.lex_state = 256},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 256},
  [362] = {.lex_state = 256},
  [363] = {.lex_state = 3},
  [364] = {.lex_state = 256},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 256},
  [367] = {.lex_state = 256},
  [368] = {.lex_state = 256},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 256},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 256},
  [373] = {.lex_state = 3},
  [374] = {.lex_state = 256},
  [375] = {.lex_state = 256},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 3},
  [382] = {.lex_state = 256},
  [383] = {.lex_state = 256},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 256},
  [386] = {.lex_state = 256},
  [387] = {.lex_state = 256},
  [388] = {.lex_state = 256},
  [389] = {.lex_state = 256},
  [390] = {.lex_state = 256},
  [391] = {.lex_state = 256},
  [392] = {.lex_state = 256},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 256},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 256},
  [397] = {.lex_state = 256},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 256},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 256},
};

enum {
  ts_external_token__edgeql_chars = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__edgeql_chars] = sym__edgeql_chars,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__edgeql_chars] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_scalar] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_overloaded] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_inheritable] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_setof] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_unescaped_single_string_fragment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_bigint] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_datetime] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_date] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONlocal_time] = ACTIONS(1),
    [anon_sym_cal_COLON_COLONrelative_duration] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_anytype] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__edgeql_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(390),
    [sym_module] = STATE(297),
    [aux_sym_source_file_repeat1] = STATE(297),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [50] = 9,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 23,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [109] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [156] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(39), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [203] = 6,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(21), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 27,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [256] = 8,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 25,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [313] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [360] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [407] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(21), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 31,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [456] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(43), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [503] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(47), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [550] = 11,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 22,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [613] = 11,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 22,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [676] = 10,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 23,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [737] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(57), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [784] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [831] = 12,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(17), 21,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_PIPE_PIPE,
  [896] = 5,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(21), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 29,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [947] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 34,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [994] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1061] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1128] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(79), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1195] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1262] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1329] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1396] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1463] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1530] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1597] = 14,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(107), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1664] = 11,
    ACTIONS(111), 1,
      anon_sym_optional,
    ACTIONS(113), 1,
      anon_sym_setof,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(94), 1,
      sym_returnspec,
    STATE(114), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1721] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_scalartype,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(62), 2,
      sym_enum,
      sym_type,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1773] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_scalartype,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(68), 2,
      sym_enum,
      sym_type,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1825] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(106), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1873] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(74), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1921] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(384), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [1969] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(314), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2017] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(109), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2065] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(302), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 17,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
  [2115] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(81), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2163] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(75), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2211] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(121), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2259] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(72), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2307] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(101), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2355] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(102), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2403] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(330), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2451] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(334), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(52), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(53), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(115), 18,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_date,
      anon_sym_sequence,
      anon_sym_anytype,
      sym_identifier,
  [2499] = 14,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(132), 1,
      anon_sym_scalar,
    ACTIONS(135), 1,
      anon_sym_link,
    ACTIONS(138), 1,
      anon_sym_property,
    ACTIONS(141), 1,
      anon_sym_annotation,
    ACTIONS(144), 1,
      anon_sym_constraint,
    ACTIONS(147), 1,
      anon_sym_alias,
    ACTIONS(150), 1,
      anon_sym_function,
    STATE(206), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(48), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [2557] = 14,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_type,
    ACTIONS(160), 1,
      anon_sym_scalar,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(170), 1,
      anon_sym_alias,
    ACTIONS(172), 1,
      anon_sym_function,
    STATE(206), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(48), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [2615] = 14,
    ACTIONS(158), 1,
      anon_sym_type,
    ACTIONS(160), 1,
      anon_sym_scalar,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(170), 1,
      anon_sym_alias,
    ACTIONS(172), 1,
      anon_sym_function,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(209), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(49), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [2673] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(178), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [2704] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [2735] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(182), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [2766] = 9,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 1,
      anon_sym_COLON_EQ,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      anon_sym_extending,
    STATE(87), 1,
      sym_extending,
    STATE(125), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(186), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2811] = 9,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(198), 1,
      anon_sym_DASH_GT,
    ACTIONS(200), 1,
      anon_sym_COLON_EQ,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_extending,
    STATE(118), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(196), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2856] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(204), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [2887] = 9,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(208), 1,
      anon_sym_DASH_GT,
    ACTIONS(210), 1,
      anon_sym_COLON_EQ,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_extending,
    STATE(124), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2932] = 9,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(216), 1,
      anon_sym_DASH_GT,
    ACTIONS(218), 1,
      anon_sym_COLON_EQ,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_extending,
    STATE(122), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2977] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [3008] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [3039] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_GT,
  [3070] = 4,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(228), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3104] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(232), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3138] = 4,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_extending_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(237), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3172] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(239), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3201] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(241), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3230] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3265] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(245), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3294] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(15), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
  [3329] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 1,
      anon_sym_COLON_EQ,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(249), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3368] = 7,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      anon_sym_COLON_EQ,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(257), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3407] = 6,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_COLON_EQ,
    STATE(117), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3443] = 15,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3497] = 6,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_COLON_EQ,
    STATE(116), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3533] = 6,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_COLON_EQ,
    STATE(107), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3569] = 15,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3623] = 4,
    ACTIONS(281), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(339), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 19,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_sequence,
      anon_sym_anytype,
  [3655] = 4,
    ACTIONS(285), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(309), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 19,
      anon_sym_str,
      anon_sym_bool,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_bigint,
      anon_sym_decimal,
      anon_sym_json,
      anon_sym_uuid,
      anon_sym_bytes,
      anon_sym_datetime,
      anon_sym_duration,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
      anon_sym_sequence,
      anon_sym_anytype,
  [3687] = 11,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      anon_sym_link,
    ACTIONS(292), 1,
      anon_sym_property,
    ACTIONS(295), 1,
      anon_sym_annotation,
    ACTIONS(298), 1,
      anon_sym_constraint,
    ACTIONS(301), 1,
      anon_sym_index,
    STATE(246), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(260), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(79), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(304), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3733] = 11,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_index,
    STATE(246), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(260), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(82), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3779] = 6,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_COLON_EQ,
    STATE(108), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3815] = 11,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(309), 1,
      anon_sym_index,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(260), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(79), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3861] = 6,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    STATE(119), 1,
      sym_extending,
    STATE(195), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(315), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3896] = 6,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    STATE(115), 1,
      sym_extending,
    STATE(193), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(317), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3931] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3980] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4029] = 4,
    ACTIONS(325), 1,
      anon_sym_DASH_GT,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4059] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4107] = 4,
    ACTIONS(333), 1,
      anon_sym_DASH_GT,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4137] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4185] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4233] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4281] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4329] = 5,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_using,
    STATE(200), 1,
      sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4361] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4409] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4457] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4505] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4553] = 13,
    ACTIONS(49), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(25), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4601] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(361), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4626] = 3,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4653] = 3,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(95), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4680] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(367), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4705] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(369), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4730] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(371), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4755] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(373), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4780] = 3,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(75), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4807] = 3,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4834] = 3,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4861] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(379), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4886] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(381), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4911] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(383), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4936] = 3,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4963] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_using,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4988] = 4,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5017] = 3,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5044] = 3,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5071] = 3,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(257), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5098] = 4,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5127] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5154] = 3,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(69), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5181] = 3,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(249), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5208] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 18,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_SEMI,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5233] = 3,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5260] = 3,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5287] = 8,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(169), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5323] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(171), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5359] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(405), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5383] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(164), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5419] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5443] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(409), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5467] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5503] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(95), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5527] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(99), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5551] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(257), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5575] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5599] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(413), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5623] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(415), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5647] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(323), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5671] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5707] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(154), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5743] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5779] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(421), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5803] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5839] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(161), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5875] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5899] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(363), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5923] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(83), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5947] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5971] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(425), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5995] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(132), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6031] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(429), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6055] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(331), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6079] = 8,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6115] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(249), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6139] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(375), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6163] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(170), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6199] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(433), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6223] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(435), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6247] = 8,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      anon_sym_annotation,
    ACTIONS(442), 1,
      anon_sym_using,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(445), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6283] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6319] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(175), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6355] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(75), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6379] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6415] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(140), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6451] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(455), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6475] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(457), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6499] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(459), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6523] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6559] = 8,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_annotation,
    ACTIONS(468), 1,
      anon_sym_using,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(170), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(471), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6595] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6631] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(144), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6667] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(479), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6691] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(481), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6715] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6751] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(181), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6787] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(91), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6811] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6835] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(485), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6859] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(487), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6883] = 8,
    ACTIONS(395), 1,
      anon_sym_annotation,
    ACTIONS(397), 1,
      anon_sym_using,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(160), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(399), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6919] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(69), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6943] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(491), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6967] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(493), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6991] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(495), 17,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7015] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(497), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7038] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(499), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7061] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(501), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7084] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(503), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7107] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(505), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7130] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(507), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7153] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(509), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7176] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(387), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7199] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(511), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7222] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7245] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(513), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7268] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(515), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7291] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(517), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7314] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(519), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7337] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(521), 16,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_alias,
      anon_sym_function,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7360] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(523), 1,
      anon_sym_COLON_EQ,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7391] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(527), 1,
      anon_sym_COLON_EQ,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(219), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7422] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(531), 1,
      anon_sym_COLON_EQ,
    ACTIONS(533), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(221), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7453] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(535), 1,
      anon_sym_COLON_EQ,
    ACTIONS(537), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7484] = 6,
    ACTIONS(541), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(544), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7513] = 7,
    ACTIONS(547), 1,
      anon_sym_scalar,
    ACTIONS(549), 1,
      anon_sym_link,
    ACTIONS(551), 1,
      anon_sym_property,
    ACTIONS(553), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(220), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7543] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(555), 13,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7563] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7591] = 4,
    ACTIONS(559), 1,
      anon_sym_type,
    ACTIONS(563), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(561), 11,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7615] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(213), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7643] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(565), 13,
      anon_sym_type,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7663] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(567), 13,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7683] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7711] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(571), 13,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7731] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7759] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(575), 13,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7779] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7807] = 10,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(73), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [7843] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7871] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(220), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(595), 4,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
    ACTIONS(597), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7895] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(205), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7923] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(208), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(271), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7951] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(604), 13,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_constraint,
      anon_sym_index,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7971] = 10,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      sym_number,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(76), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8007] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(21), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8040] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(91), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8073] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(88), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8106] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(23), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8139] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(9), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8172] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(6), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8205] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      sym_number,
    ACTIONS(610), 1,
      sym_identifier,
    STATE(85), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8238] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(7), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8271] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(86), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8304] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(14), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8337] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(10), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8370] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(18), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8403] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(13), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8436] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(95), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8469] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(99), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8502] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(92), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8535] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(28), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8568] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(97), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8601] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(98), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8634] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(27), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8667] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(93), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8700] = 6,
    ACTIONS(549), 1,
      anon_sym_link,
    ACTIONS(551), 1,
      anon_sym_property,
    ACTIONS(553), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(220), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [8727] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(19), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8760] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(24), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8793] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(25), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8826] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(30), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8859] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(3), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8892] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(90), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8925] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(22), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8958] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(29), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8991] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(26), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9024] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(96), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9057] = 9,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_global,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(591), 1,
      sym_number,
    STATE(15), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9090] = 3,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9110] = 3,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(614), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9130] = 3,
    ACTIONS(563), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(561), 10,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9150] = 3,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9170] = 3,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9190] = 3,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9210] = 3,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9230] = 3,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(624), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9250] = 3,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9270] = 3,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(630), 10,
      anon_sym_annotation,
      anon_sym_using,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      sym_identifier,
  [9290] = 11,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_on,
    ACTIONS(640), 1,
      anon_sym_except,
    STATE(272), 1,
      sym_argspec,
    STATE(278), 1,
      sym_on,
    STATE(294), 1,
      sym_except,
    STATE(332), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9325] = 11,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_on,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    STATE(273), 1,
      sym_argspec,
    STATE(281), 1,
      sym_on,
    STATE(290), 1,
      sym_except,
    STATE(329), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9360] = 4,
    ACTIONS(646), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(220), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9381] = 4,
    ACTIONS(553), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(220), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(174), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [9402] = 9,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(638), 1,
      anon_sym_on,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(277), 1,
      sym_on,
    STATE(289), 1,
      sym_except,
    STATE(325), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9431] = 9,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(638), 1,
      anon_sym_on,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    STATE(282), 1,
      sym_on,
    STATE(284), 1,
      sym_except,
    STATE(333), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9460] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(656), 6,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9473] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(658), 6,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9486] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(660), 6,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9499] = 7,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    STATE(285), 1,
      sym_except,
    STATE(319), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9522] = 7,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(289), 1,
      sym_except,
    STATE(325), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9545] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(666), 6,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9558] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 6,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9571] = 7,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      sym_except,
    STATE(333), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9594] = 7,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(286), 1,
      sym_except,
    STATE(324), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9617] = 5,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    STATE(198), 1,
      sym_declarations,
    STATE(317), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9634] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(324), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9651] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    STATE(321), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9668] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9685] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_except,
  [9696] = 4,
    ACTIONS(684), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(686), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [9711] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9728] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    STATE(333), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9745] = 4,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      anon_sym_module,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(291), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [9760] = 4,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
    STATE(292), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(695), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [9775] = 5,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_extending,
    STATE(190), 1,
      sym_declarations,
    STATE(316), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9792] = 5,
    ACTIONS(194), 1,
      anon_sym_extending,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(325), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9809] = 4,
    ACTIONS(698), 1,
      anon_sym_SQUOTE,
    STATE(292), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(700), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [9824] = 5,
    ACTIONS(640), 1,
      anon_sym_except,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      sym_except,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9841] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(291), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [9856] = 4,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_GT,
    STATE(299), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9870] = 4,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9884] = 3,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [9896] = 4,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_GT,
    STATE(313), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9910] = 4,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_GT,
    STATE(301), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9924] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9938] = 4,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9952] = 4,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9966] = 4,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9980] = 4,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_GT,
    STATE(307), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9994] = 4,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_GT,
    STATE(306), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10008] = 4,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10022] = 4,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10036] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(747), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
  [10046] = 4,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10060] = 4,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_GT,
    STATE(313), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10074] = 4,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_GT,
    STATE(308), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10088] = 3,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    STATE(340), 1,
      sym_schema_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10099] = 3,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10110] = 3,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10121] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(761), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [10130] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10141] = 3,
    ACTIONS(638), 1,
      anon_sym_on,
    STATE(296), 1,
      sym_on,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10152] = 3,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10163] = 3,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
    ACTIONS(769), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10174] = 3,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    STATE(391), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10185] = 3,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10196] = 3,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10207] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(771), 2,
      sym__edgeql_chars,
      sym_escape_sequence,
  [10216] = 3,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    STATE(352), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10227] = 3,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10238] = 3,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10249] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10258] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(777), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10267] = 3,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10278] = 3,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10289] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(779), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10298] = 3,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_argspec,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10309] = 3,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(783), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10320] = 3,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10331] = 3,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10342] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10351] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(795), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10360] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(797), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10369] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(736), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10378] = 2,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10386] = 2,
    ACTIONS(801), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10394] = 2,
    ACTIONS(803), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10402] = 2,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10410] = 2,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10418] = 2,
    ACTIONS(809), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10426] = 2,
    ACTIONS(791), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10434] = 2,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10442] = 2,
    ACTIONS(813), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10450] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10458] = 2,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10466] = 2,
    ACTIONS(819), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10474] = 2,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10482] = 2,
    ACTIONS(823), 1,
      anon_sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10490] = 2,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10498] = 2,
    ACTIONS(827), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10506] = 2,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10514] = 2,
    ACTIONS(831), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10522] = 2,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10530] = 2,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10538] = 2,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10546] = 2,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10554] = 2,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10562] = 2,
    ACTIONS(843), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10570] = 2,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10578] = 2,
    ACTIONS(845), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10586] = 2,
    ACTIONS(847), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10594] = 2,
    ACTIONS(849), 1,
      anon_sym_enum,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10602] = 2,
    ACTIONS(851), 1,
      anon_sym_DASH_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10610] = 2,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10618] = 2,
    ACTIONS(855), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10626] = 2,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10634] = 2,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10642] = 2,
    ACTIONS(861), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10650] = 2,
    ACTIONS(863), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10658] = 2,
    ACTIONS(865), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10666] = 2,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10674] = 2,
    ACTIONS(869), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10682] = 2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10690] = 2,
    ACTIONS(873), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10698] = 2,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10706] = 2,
    ACTIONS(877), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10714] = 2,
    ACTIONS(879), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10722] = 2,
    ACTIONS(881), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10730] = 2,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10738] = 2,
    ACTIONS(883), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10746] = 2,
    ACTIONS(885), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10754] = 2,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10762] = 2,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10770] = 2,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10778] = 2,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10786] = 2,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10794] = 2,
    ACTIONS(897), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10802] = 2,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10810] = 2,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10818] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10826] = 2,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10834] = 2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10842] = 2,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 503,
  [SMALL_STATE(13)] = 550,
  [SMALL_STATE(14)] = 613,
  [SMALL_STATE(15)] = 676,
  [SMALL_STATE(16)] = 737,
  [SMALL_STATE(17)] = 784,
  [SMALL_STATE(18)] = 831,
  [SMALL_STATE(19)] = 896,
  [SMALL_STATE(20)] = 947,
  [SMALL_STATE(21)] = 994,
  [SMALL_STATE(22)] = 1061,
  [SMALL_STATE(23)] = 1128,
  [SMALL_STATE(24)] = 1195,
  [SMALL_STATE(25)] = 1262,
  [SMALL_STATE(26)] = 1329,
  [SMALL_STATE(27)] = 1396,
  [SMALL_STATE(28)] = 1463,
  [SMALL_STATE(29)] = 1530,
  [SMALL_STATE(30)] = 1597,
  [SMALL_STATE(31)] = 1664,
  [SMALL_STATE(32)] = 1721,
  [SMALL_STATE(33)] = 1773,
  [SMALL_STATE(34)] = 1825,
  [SMALL_STATE(35)] = 1873,
  [SMALL_STATE(36)] = 1921,
  [SMALL_STATE(37)] = 1969,
  [SMALL_STATE(38)] = 2017,
  [SMALL_STATE(39)] = 2065,
  [SMALL_STATE(40)] = 2115,
  [SMALL_STATE(41)] = 2163,
  [SMALL_STATE(42)] = 2211,
  [SMALL_STATE(43)] = 2259,
  [SMALL_STATE(44)] = 2307,
  [SMALL_STATE(45)] = 2355,
  [SMALL_STATE(46)] = 2403,
  [SMALL_STATE(47)] = 2451,
  [SMALL_STATE(48)] = 2499,
  [SMALL_STATE(49)] = 2557,
  [SMALL_STATE(50)] = 2615,
  [SMALL_STATE(51)] = 2673,
  [SMALL_STATE(52)] = 2704,
  [SMALL_STATE(53)] = 2735,
  [SMALL_STATE(54)] = 2766,
  [SMALL_STATE(55)] = 2811,
  [SMALL_STATE(56)] = 2856,
  [SMALL_STATE(57)] = 2887,
  [SMALL_STATE(58)] = 2932,
  [SMALL_STATE(59)] = 2977,
  [SMALL_STATE(60)] = 3008,
  [SMALL_STATE(61)] = 3039,
  [SMALL_STATE(62)] = 3070,
  [SMALL_STATE(63)] = 3104,
  [SMALL_STATE(64)] = 3138,
  [SMALL_STATE(65)] = 3172,
  [SMALL_STATE(66)] = 3201,
  [SMALL_STATE(67)] = 3230,
  [SMALL_STATE(68)] = 3265,
  [SMALL_STATE(69)] = 3294,
  [SMALL_STATE(70)] = 3329,
  [SMALL_STATE(71)] = 3368,
  [SMALL_STATE(72)] = 3407,
  [SMALL_STATE(73)] = 3443,
  [SMALL_STATE(74)] = 3497,
  [SMALL_STATE(75)] = 3533,
  [SMALL_STATE(76)] = 3569,
  [SMALL_STATE(77)] = 3623,
  [SMALL_STATE(78)] = 3655,
  [SMALL_STATE(79)] = 3687,
  [SMALL_STATE(80)] = 3733,
  [SMALL_STATE(81)] = 3779,
  [SMALL_STATE(82)] = 3815,
  [SMALL_STATE(83)] = 3861,
  [SMALL_STATE(84)] = 3896,
  [SMALL_STATE(85)] = 3931,
  [SMALL_STATE(86)] = 3980,
  [SMALL_STATE(87)] = 4029,
  [SMALL_STATE(88)] = 4059,
  [SMALL_STATE(89)] = 4107,
  [SMALL_STATE(90)] = 4137,
  [SMALL_STATE(91)] = 4185,
  [SMALL_STATE(92)] = 4233,
  [SMALL_STATE(93)] = 4281,
  [SMALL_STATE(94)] = 4329,
  [SMALL_STATE(95)] = 4361,
  [SMALL_STATE(96)] = 4409,
  [SMALL_STATE(97)] = 4457,
  [SMALL_STATE(98)] = 4505,
  [SMALL_STATE(99)] = 4553,
  [SMALL_STATE(100)] = 4601,
  [SMALL_STATE(101)] = 4626,
  [SMALL_STATE(102)] = 4653,
  [SMALL_STATE(103)] = 4680,
  [SMALL_STATE(104)] = 4705,
  [SMALL_STATE(105)] = 4730,
  [SMALL_STATE(106)] = 4755,
  [SMALL_STATE(107)] = 4780,
  [SMALL_STATE(108)] = 4807,
  [SMALL_STATE(109)] = 4834,
  [SMALL_STATE(110)] = 4861,
  [SMALL_STATE(111)] = 4886,
  [SMALL_STATE(112)] = 4911,
  [SMALL_STATE(113)] = 4936,
  [SMALL_STATE(114)] = 4963,
  [SMALL_STATE(115)] = 4988,
  [SMALL_STATE(116)] = 5017,
  [SMALL_STATE(117)] = 5044,
  [SMALL_STATE(118)] = 5071,
  [SMALL_STATE(119)] = 5098,
  [SMALL_STATE(120)] = 5127,
  [SMALL_STATE(121)] = 5154,
  [SMALL_STATE(122)] = 5181,
  [SMALL_STATE(123)] = 5208,
  [SMALL_STATE(124)] = 5233,
  [SMALL_STATE(125)] = 5260,
  [SMALL_STATE(126)] = 5287,
  [SMALL_STATE(127)] = 5323,
  [SMALL_STATE(128)] = 5359,
  [SMALL_STATE(129)] = 5383,
  [SMALL_STATE(130)] = 5419,
  [SMALL_STATE(131)] = 5443,
  [SMALL_STATE(132)] = 5467,
  [SMALL_STATE(133)] = 5503,
  [SMALL_STATE(134)] = 5527,
  [SMALL_STATE(135)] = 5551,
  [SMALL_STATE(136)] = 5575,
  [SMALL_STATE(137)] = 5599,
  [SMALL_STATE(138)] = 5623,
  [SMALL_STATE(139)] = 5647,
  [SMALL_STATE(140)] = 5671,
  [SMALL_STATE(141)] = 5707,
  [SMALL_STATE(142)] = 5743,
  [SMALL_STATE(143)] = 5779,
  [SMALL_STATE(144)] = 5803,
  [SMALL_STATE(145)] = 5839,
  [SMALL_STATE(146)] = 5875,
  [SMALL_STATE(147)] = 5899,
  [SMALL_STATE(148)] = 5923,
  [SMALL_STATE(149)] = 5947,
  [SMALL_STATE(150)] = 5971,
  [SMALL_STATE(151)] = 5995,
  [SMALL_STATE(152)] = 6031,
  [SMALL_STATE(153)] = 6055,
  [SMALL_STATE(154)] = 6079,
  [SMALL_STATE(155)] = 6115,
  [SMALL_STATE(156)] = 6139,
  [SMALL_STATE(157)] = 6163,
  [SMALL_STATE(158)] = 6199,
  [SMALL_STATE(159)] = 6223,
  [SMALL_STATE(160)] = 6247,
  [SMALL_STATE(161)] = 6283,
  [SMALL_STATE(162)] = 6319,
  [SMALL_STATE(163)] = 6355,
  [SMALL_STATE(164)] = 6379,
  [SMALL_STATE(165)] = 6415,
  [SMALL_STATE(166)] = 6451,
  [SMALL_STATE(167)] = 6475,
  [SMALL_STATE(168)] = 6499,
  [SMALL_STATE(169)] = 6523,
  [SMALL_STATE(170)] = 6559,
  [SMALL_STATE(171)] = 6595,
  [SMALL_STATE(172)] = 6631,
  [SMALL_STATE(173)] = 6667,
  [SMALL_STATE(174)] = 6691,
  [SMALL_STATE(175)] = 6715,
  [SMALL_STATE(176)] = 6751,
  [SMALL_STATE(177)] = 6787,
  [SMALL_STATE(178)] = 6811,
  [SMALL_STATE(179)] = 6835,
  [SMALL_STATE(180)] = 6859,
  [SMALL_STATE(181)] = 6883,
  [SMALL_STATE(182)] = 6919,
  [SMALL_STATE(183)] = 6943,
  [SMALL_STATE(184)] = 6967,
  [SMALL_STATE(185)] = 6991,
  [SMALL_STATE(186)] = 7015,
  [SMALL_STATE(187)] = 7038,
  [SMALL_STATE(188)] = 7061,
  [SMALL_STATE(189)] = 7084,
  [SMALL_STATE(190)] = 7107,
  [SMALL_STATE(191)] = 7130,
  [SMALL_STATE(192)] = 7153,
  [SMALL_STATE(193)] = 7176,
  [SMALL_STATE(194)] = 7199,
  [SMALL_STATE(195)] = 7222,
  [SMALL_STATE(196)] = 7245,
  [SMALL_STATE(197)] = 7268,
  [SMALL_STATE(198)] = 7291,
  [SMALL_STATE(199)] = 7314,
  [SMALL_STATE(200)] = 7337,
  [SMALL_STATE(201)] = 7360,
  [SMALL_STATE(202)] = 7391,
  [SMALL_STATE(203)] = 7422,
  [SMALL_STATE(204)] = 7453,
  [SMALL_STATE(205)] = 7484,
  [SMALL_STATE(206)] = 7513,
  [SMALL_STATE(207)] = 7543,
  [SMALL_STATE(208)] = 7563,
  [SMALL_STATE(209)] = 7591,
  [SMALL_STATE(210)] = 7615,
  [SMALL_STATE(211)] = 7643,
  [SMALL_STATE(212)] = 7663,
  [SMALL_STATE(213)] = 7683,
  [SMALL_STATE(214)] = 7711,
  [SMALL_STATE(215)] = 7731,
  [SMALL_STATE(216)] = 7759,
  [SMALL_STATE(217)] = 7779,
  [SMALL_STATE(218)] = 7807,
  [SMALL_STATE(219)] = 7843,
  [SMALL_STATE(220)] = 7871,
  [SMALL_STATE(221)] = 7895,
  [SMALL_STATE(222)] = 7923,
  [SMALL_STATE(223)] = 7951,
  [SMALL_STATE(224)] = 7971,
  [SMALL_STATE(225)] = 8007,
  [SMALL_STATE(226)] = 8040,
  [SMALL_STATE(227)] = 8073,
  [SMALL_STATE(228)] = 8106,
  [SMALL_STATE(229)] = 8139,
  [SMALL_STATE(230)] = 8172,
  [SMALL_STATE(231)] = 8205,
  [SMALL_STATE(232)] = 8238,
  [SMALL_STATE(233)] = 8271,
  [SMALL_STATE(234)] = 8304,
  [SMALL_STATE(235)] = 8337,
  [SMALL_STATE(236)] = 8370,
  [SMALL_STATE(237)] = 8403,
  [SMALL_STATE(238)] = 8436,
  [SMALL_STATE(239)] = 8469,
  [SMALL_STATE(240)] = 8502,
  [SMALL_STATE(241)] = 8535,
  [SMALL_STATE(242)] = 8568,
  [SMALL_STATE(243)] = 8601,
  [SMALL_STATE(244)] = 8634,
  [SMALL_STATE(245)] = 8667,
  [SMALL_STATE(246)] = 8700,
  [SMALL_STATE(247)] = 8727,
  [SMALL_STATE(248)] = 8760,
  [SMALL_STATE(249)] = 8793,
  [SMALL_STATE(250)] = 8826,
  [SMALL_STATE(251)] = 8859,
  [SMALL_STATE(252)] = 8892,
  [SMALL_STATE(253)] = 8925,
  [SMALL_STATE(254)] = 8958,
  [SMALL_STATE(255)] = 8991,
  [SMALL_STATE(256)] = 9024,
  [SMALL_STATE(257)] = 9057,
  [SMALL_STATE(258)] = 9090,
  [SMALL_STATE(259)] = 9110,
  [SMALL_STATE(260)] = 9130,
  [SMALL_STATE(261)] = 9150,
  [SMALL_STATE(262)] = 9170,
  [SMALL_STATE(263)] = 9190,
  [SMALL_STATE(264)] = 9210,
  [SMALL_STATE(265)] = 9230,
  [SMALL_STATE(266)] = 9250,
  [SMALL_STATE(267)] = 9270,
  [SMALL_STATE(268)] = 9290,
  [SMALL_STATE(269)] = 9325,
  [SMALL_STATE(270)] = 9360,
  [SMALL_STATE(271)] = 9381,
  [SMALL_STATE(272)] = 9402,
  [SMALL_STATE(273)] = 9431,
  [SMALL_STATE(274)] = 9460,
  [SMALL_STATE(275)] = 9473,
  [SMALL_STATE(276)] = 9486,
  [SMALL_STATE(277)] = 9499,
  [SMALL_STATE(278)] = 9522,
  [SMALL_STATE(279)] = 9545,
  [SMALL_STATE(280)] = 9558,
  [SMALL_STATE(281)] = 9571,
  [SMALL_STATE(282)] = 9594,
  [SMALL_STATE(283)] = 9617,
  [SMALL_STATE(284)] = 9634,
  [SMALL_STATE(285)] = 9651,
  [SMALL_STATE(286)] = 9668,
  [SMALL_STATE(287)] = 9685,
  [SMALL_STATE(288)] = 9696,
  [SMALL_STATE(289)] = 9711,
  [SMALL_STATE(290)] = 9728,
  [SMALL_STATE(291)] = 9745,
  [SMALL_STATE(292)] = 9760,
  [SMALL_STATE(293)] = 9775,
  [SMALL_STATE(294)] = 9792,
  [SMALL_STATE(295)] = 9809,
  [SMALL_STATE(296)] = 9824,
  [SMALL_STATE(297)] = 9841,
  [SMALL_STATE(298)] = 9856,
  [SMALL_STATE(299)] = 9870,
  [SMALL_STATE(300)] = 9884,
  [SMALL_STATE(301)] = 9896,
  [SMALL_STATE(302)] = 9910,
  [SMALL_STATE(303)] = 9924,
  [SMALL_STATE(304)] = 9938,
  [SMALL_STATE(305)] = 9952,
  [SMALL_STATE(306)] = 9966,
  [SMALL_STATE(307)] = 9980,
  [SMALL_STATE(308)] = 9994,
  [SMALL_STATE(309)] = 10008,
  [SMALL_STATE(310)] = 10022,
  [SMALL_STATE(311)] = 10036,
  [SMALL_STATE(312)] = 10046,
  [SMALL_STATE(313)] = 10060,
  [SMALL_STATE(314)] = 10074,
  [SMALL_STATE(315)] = 10088,
  [SMALL_STATE(316)] = 10099,
  [SMALL_STATE(317)] = 10110,
  [SMALL_STATE(318)] = 10121,
  [SMALL_STATE(319)] = 10130,
  [SMALL_STATE(320)] = 10141,
  [SMALL_STATE(321)] = 10152,
  [SMALL_STATE(322)] = 10163,
  [SMALL_STATE(323)] = 10174,
  [SMALL_STATE(324)] = 10185,
  [SMALL_STATE(325)] = 10196,
  [SMALL_STATE(326)] = 10207,
  [SMALL_STATE(327)] = 10216,
  [SMALL_STATE(328)] = 10227,
  [SMALL_STATE(329)] = 10238,
  [SMALL_STATE(330)] = 10249,
  [SMALL_STATE(331)] = 10258,
  [SMALL_STATE(332)] = 10267,
  [SMALL_STATE(333)] = 10278,
  [SMALL_STATE(334)] = 10289,
  [SMALL_STATE(335)] = 10298,
  [SMALL_STATE(336)] = 10309,
  [SMALL_STATE(337)] = 10320,
  [SMALL_STATE(338)] = 10331,
  [SMALL_STATE(339)] = 10342,
  [SMALL_STATE(340)] = 10351,
  [SMALL_STATE(341)] = 10360,
  [SMALL_STATE(342)] = 10369,
  [SMALL_STATE(343)] = 10378,
  [SMALL_STATE(344)] = 10386,
  [SMALL_STATE(345)] = 10394,
  [SMALL_STATE(346)] = 10402,
  [SMALL_STATE(347)] = 10410,
  [SMALL_STATE(348)] = 10418,
  [SMALL_STATE(349)] = 10426,
  [SMALL_STATE(350)] = 10434,
  [SMALL_STATE(351)] = 10442,
  [SMALL_STATE(352)] = 10450,
  [SMALL_STATE(353)] = 10458,
  [SMALL_STATE(354)] = 10466,
  [SMALL_STATE(355)] = 10474,
  [SMALL_STATE(356)] = 10482,
  [SMALL_STATE(357)] = 10490,
  [SMALL_STATE(358)] = 10498,
  [SMALL_STATE(359)] = 10506,
  [SMALL_STATE(360)] = 10514,
  [SMALL_STATE(361)] = 10522,
  [SMALL_STATE(362)] = 10530,
  [SMALL_STATE(363)] = 10538,
  [SMALL_STATE(364)] = 10546,
  [SMALL_STATE(365)] = 10554,
  [SMALL_STATE(366)] = 10562,
  [SMALL_STATE(367)] = 10570,
  [SMALL_STATE(368)] = 10578,
  [SMALL_STATE(369)] = 10586,
  [SMALL_STATE(370)] = 10594,
  [SMALL_STATE(371)] = 10602,
  [SMALL_STATE(372)] = 10610,
  [SMALL_STATE(373)] = 10618,
  [SMALL_STATE(374)] = 10626,
  [SMALL_STATE(375)] = 10634,
  [SMALL_STATE(376)] = 10642,
  [SMALL_STATE(377)] = 10650,
  [SMALL_STATE(378)] = 10658,
  [SMALL_STATE(379)] = 10666,
  [SMALL_STATE(380)] = 10674,
  [SMALL_STATE(381)] = 10682,
  [SMALL_STATE(382)] = 10690,
  [SMALL_STATE(383)] = 10698,
  [SMALL_STATE(384)] = 10706,
  [SMALL_STATE(385)] = 10714,
  [SMALL_STATE(386)] = 10722,
  [SMALL_STATE(387)] = 10730,
  [SMALL_STATE(388)] = 10738,
  [SMALL_STATE(389)] = 10746,
  [SMALL_STATE(390)] = 10754,
  [SMALL_STATE(391)] = 10762,
  [SMALL_STATE(392)] = 10770,
  [SMALL_STATE(393)] = 10778,
  [SMALL_STATE(394)] = 10786,
  [SMALL_STATE(395)] = 10794,
  [SMALL_STATE(396)] = 10802,
  [SMALL_STATE(397)] = 10810,
  [SMALL_STATE(398)] = 10818,
  [SMALL_STATE(399)] = 10826,
  [SMALL_STATE(400)] = 10834,
  [SMALL_STATE(401)] = 10842,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 3, .production_id = 7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 3, .production_id = 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 5, .production_id = 7),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 5, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 4, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 4, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(369),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(366),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(365),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(363),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(360),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(358),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(355),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(351),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(211),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6), SHIFT_REPEAT(33),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(365),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(363),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(360),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(358),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(320),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(211),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(393),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(337),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(211),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(377),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 7, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(393),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(337),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(211),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(377),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 9, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, .production_id = 10),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 9),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(360),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(211),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(211),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 9),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5, .production_id = 10),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 7),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 7),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(292),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(354),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(380),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(231),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2), SHIFT_REPEAT(233),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(46),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [887] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_esdl_external_scanner_create(void);
void tree_sitter_esdl_external_scanner_destroy(void *);
bool tree_sitter_esdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_esdl_external_scanner_serialize(void *, char *);
void tree_sitter_esdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_esdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_esdl_external_scanner_create,
      tree_sitter_esdl_external_scanner_destroy,
      tree_sitter_esdl_external_scanner_scan,
      tree_sitter_esdl_external_scanner_serialize,
      tree_sitter_esdl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
