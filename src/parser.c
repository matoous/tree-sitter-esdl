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
#define STATE_COUNT 426
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_edgedb = 19,
  anon_sym_extension = 20,
  anon_sym_extending = 21,
  anon_sym_COMMA = 22,
  anon_sym_on = 23,
  anon_sym_except = 24,
  anon_sym_abstract = 25,
  anon_sym_overloaded = 26,
  anon_sym_required = 27,
  anon_sym_optional = 28,
  anon_sym_single = 29,
  anon_sym_multi = 30,
  anon_sym_inheritable = 31,
  anon_sym_COLON = 32,
  anon_sym_setof = 33,
  anon_sym_global = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_GT_GT = 37,
  anon_sym_LT_LT = 38,
  anon_sym_AMP = 39,
  anon_sym_CARET = 40,
  anon_sym_PIPE = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_STAR = 44,
  anon_sym_SLASH = 45,
  anon_sym_PERCENT = 46,
  anon_sym_LT = 47,
  anon_sym_LT_EQ = 48,
  anon_sym_EQ = 49,
  anon_sym_BANG_EQ = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_GT = 52,
  anon_sym_SQUOTE = 53,
  sym_unescaped_single_string_fragment = 54,
  sym_escape_sequence = 55,
  anon_sym_str = 56,
  anon_sym_bool = 57,
  anon_sym_int16 = 58,
  anon_sym_int32 = 59,
  anon_sym_int64 = 60,
  anon_sym_float32 = 61,
  anon_sym_float64 = 62,
  anon_sym_bigint = 63,
  anon_sym_decimal = 64,
  anon_sym_json = 65,
  anon_sym_uuid = 66,
  anon_sym_bytes = 67,
  anon_sym_datetime = 68,
  anon_sym_duration = 69,
  anon_sym_cal_COLON_COLONlocal_datetime = 70,
  anon_sym_cal_COLON_COLONlocal_date = 71,
  anon_sym_cal_COLON_COLONlocal_time = 72,
  anon_sym_cal_COLON_COLONrelative_duration = 73,
  anon_sym_sequence = 74,
  anon_sym_anytype = 75,
  anon_sym_array = 76,
  anon_sym_tuple = 77,
  anon_sym_scalartype = 78,
  anon_sym_enum = 79,
  sym_identifier = 80,
  sym_true = 81,
  sym_false = 82,
  sym_null = 83,
  sym_comment = 84,
  sym__whitespace = 85,
  sym_source_file = 86,
  sym_module = 87,
  sym_schema_declarations = 88,
  sym_object_type = 89,
  sym_declarations = 90,
  sym_scalar_type_def = 91,
  sym_link = 92,
  sym_property = 93,
  sym_annotation = 94,
  sym_constraint = 95,
  sym_index = 96,
  sym_alias = 97,
  sym_function = 98,
  sym_extending = 99,
  sym_using = 100,
  sym_uselang = 101,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_edgedb] = "edgedb",
  [anon_sym_extension] = "extension",
  [anon_sym_extending] = "extending",
  [anon_sym_COMMA] = ",",
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
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
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
  [sym_uselang] = "uselang",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_edgedb] = anon_sym_edgedb,
  [anon_sym_extension] = anon_sym_extension,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
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
  [sym_uselang] = sym_uselang,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edgedb] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
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
  [sym_uselang] = {
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 89,
  [98] = 98,
  [99] = 98,
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
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 224,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 113,
  [238] = 238,
  [239] = 239,
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
  [252] = 119,
  [253] = 253,
  [254] = 240,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 109,
  [261] = 134,
  [262] = 262,
  [263] = 116,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 249,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 132,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 280,
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
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
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
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 360,
  [422] = 385,
  [423] = 423,
  [424] = 424,
  [425] = 425,
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
      if (eof) ADVANCE(254);
      if (lookahead == '!') ADVANCE(329);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '%') ADVANCE(494);
      if (lookahead == '&') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(494);
      if (lookahead == ')') ADVANCE(494);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead == '+') ADVANCE(494);
      if (lookahead == ',') ADVANCE(494);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '/') ADVANCE(494);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == ';') ADVANCE(494);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(494);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '^') ADVANCE(494);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'g') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'j') ADVANCE(463);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead == '{') ADVANCE(494);
      if (lookahead == '|') ADVANCE(493);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')') ADVANCE(274);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(694);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(694);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'b') ADVANCE(596);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'j') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(649);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(694);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'b') ADVANCE(596);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'j') ADVANCE(665);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(684);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(694);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == 's') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(694);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'b') ADVANCE(596);
      if (lookahead == 'c') ADVANCE(549);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'j') ADVANCE(665);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(694);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(504);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(508);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(506);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(510);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(502);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(312);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(694);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(295);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 181:
      if (lookahead == 'q') ADVANCE(230);
      END_STATE();
    case 182:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(497);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 234:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 235:
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 237:
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 241:
      if (lookahead == '{') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 242:
      if (lookahead == '{') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      if (eof) ADVANCE(254);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '&') ADVANCE(301);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')') ADVANCE(274);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '+') ADVANCE(304);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '-') ADVANCE(305);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == ':') ADVANCE(294);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '<') ADVANCE(309);
      if (lookahead == '=') ADVANCE(311);
      if (lookahead == '>') ADVANCE(315);
      if (lookahead == '^') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'j') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '|') ADVANCE(303);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_scalar);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_edgedb);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_optional);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_single);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_multi);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(297);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(298);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(300);
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(313);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '&') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '1') ADVANCE(324);
      if (lookahead == '3') ADVANCE(321);
      if (lookahead == '6') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '3') ADVANCE(321);
      if (lookahead == '6') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '4') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '6') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '<') ADVANCE(494);
      if (lookahead == '=') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(494);
      if (lookahead == '>') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '=') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '>') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '_') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'b') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == 'y') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'k') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 'y') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'q') ADVANCE(488);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'y') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'v') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'x') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 'y') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '|') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(495);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(546);
      if (lookahead == '3') ADVANCE(541);
      if (lookahead == '6') ADVANCE(544);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(505);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(542);
      if (lookahead == '6') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(694);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(564);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(609);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(573);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(691);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(657);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(568);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(611);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(671);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(612);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(616);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(618);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(614);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(658);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(678);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(681);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(636);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(622);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(559);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(598);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(578);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(673);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 't') ADVANCE(655);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(519);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(285);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(283);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(588);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 't') ADVANCE(655);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(535);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(533);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(523);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(531);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 't') ADVANCE(655);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(289);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(293);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(695);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(696);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(664);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(571);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(634);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(663);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(572);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(660);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(654);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(677);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'g') ADVANCE(271);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'g') ADVANCE(608);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'g') ADVANCE(621);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(589);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead == 'y') ADVANCE(669);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(570);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(626);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(291);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(625);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(642);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(643);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(661);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(646);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(632);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(635);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(679);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(637);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(547);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(501);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(515);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(287);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(697);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(296);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(647);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(552);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(575);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(667);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(640);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(613);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(580);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(581);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(644);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(680);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(577);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(554);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(656);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(517);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(525);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(595);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(266);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(594);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(670);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(567);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(592);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(645);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(672);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(556);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(628);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(565);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(610);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(638);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(629);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(550);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(683);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(631);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(555);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(676);
      if (lookahead == 'v') ADVANCE(587);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(676);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(617);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(576);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(686);
      if (lookahead == 't') ADVANCE(538);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(686);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(688);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(499);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(551);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(539);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(561);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(553);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(607);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(585);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(690);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(623);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 's') ADVANCE(521);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 's') ADVANCE(639);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 's') ADVANCE(682);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 's') ADVANCE(583);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 's') ADVANCE(606);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(584);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(540);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(543);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(513);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(281);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(692);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(591);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(601);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(600);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(602);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(548);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(599);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(604);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(659);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 't') ADVANCE(562);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(597);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(650);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(586);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(624);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(603);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(620);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(582);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(534);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(651);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(674);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(231);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(694);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 253},
  [2] = {.lex_state = 253},
  [3] = {.lex_state = 253},
  [4] = {.lex_state = 253},
  [5] = {.lex_state = 253},
  [6] = {.lex_state = 253},
  [7] = {.lex_state = 253},
  [8] = {.lex_state = 253},
  [9] = {.lex_state = 253},
  [10] = {.lex_state = 253},
  [11] = {.lex_state = 253},
  [12] = {.lex_state = 253},
  [13] = {.lex_state = 253},
  [14] = {.lex_state = 253},
  [15] = {.lex_state = 253},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 253},
  [18] = {.lex_state = 253},
  [19] = {.lex_state = 253},
  [20] = {.lex_state = 253},
  [21] = {.lex_state = 253},
  [22] = {.lex_state = 253},
  [23] = {.lex_state = 253},
  [24] = {.lex_state = 253},
  [25] = {.lex_state = 253},
  [26] = {.lex_state = 253},
  [27] = {.lex_state = 253},
  [28] = {.lex_state = 253},
  [29] = {.lex_state = 253},
  [30] = {.lex_state = 253},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 253},
  [50] = {.lex_state = 253},
  [51] = {.lex_state = 253},
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
  [67] = {.lex_state = 253},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 253},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 253},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 253},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 253},
  [79] = {.lex_state = 253},
  [80] = {.lex_state = 253},
  [81] = {.lex_state = 253},
  [82] = {.lex_state = 253},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 253},
  [85] = {.lex_state = 253},
  [86] = {.lex_state = 253},
  [87] = {.lex_state = 253},
  [88] = {.lex_state = 253},
  [89] = {.lex_state = 253},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 253},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 253},
  [94] = {.lex_state = 253},
  [95] = {.lex_state = 253},
  [96] = {.lex_state = 253},
  [97] = {.lex_state = 253},
  [98] = {.lex_state = 253},
  [99] = {.lex_state = 253},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 253},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 253},
  [107] = {.lex_state = 253},
  [108] = {.lex_state = 253},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 253},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 253},
  [114] = {.lex_state = 253},
  [115] = {.lex_state = 253},
  [116] = {.lex_state = 253},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 253},
  [120] = {.lex_state = 253},
  [121] = {.lex_state = 253},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 253},
  [124] = {.lex_state = 253},
  [125] = {.lex_state = 253},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 253},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 253},
  [132] = {.lex_state = 253},
  [133] = {.lex_state = 253},
  [134] = {.lex_state = 253},
  [135] = {.lex_state = 253},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 253},
  [138] = {.lex_state = 253},
  [139] = {.lex_state = 253},
  [140] = {.lex_state = 253},
  [141] = {.lex_state = 253},
  [142] = {.lex_state = 253},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 253},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 253},
  [147] = {.lex_state = 253},
  [148] = {.lex_state = 253},
  [149] = {.lex_state = 253},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 253},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 253},
  [156] = {.lex_state = 253},
  [157] = {.lex_state = 253},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 253},
  [160] = {.lex_state = 253},
  [161] = {.lex_state = 253},
  [162] = {.lex_state = 253},
  [163] = {.lex_state = 253},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 253},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 253},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 253},
  [172] = {.lex_state = 253},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 253},
  [175] = {.lex_state = 253},
  [176] = {.lex_state = 253},
  [177] = {.lex_state = 253},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 253},
  [180] = {.lex_state = 253},
  [181] = {.lex_state = 253},
  [182] = {.lex_state = 253},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 253},
  [185] = {.lex_state = 253},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 253},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 253},
  [193] = {.lex_state = 253},
  [194] = {.lex_state = 253},
  [195] = {.lex_state = 253},
  [196] = {.lex_state = 253},
  [197] = {.lex_state = 253},
  [198] = {.lex_state = 253},
  [199] = {.lex_state = 253},
  [200] = {.lex_state = 253},
  [201] = {.lex_state = 253},
  [202] = {.lex_state = 253},
  [203] = {.lex_state = 253},
  [204] = {.lex_state = 253},
  [205] = {.lex_state = 253},
  [206] = {.lex_state = 253},
  [207] = {.lex_state = 253},
  [208] = {.lex_state = 253},
  [209] = {.lex_state = 253},
  [210] = {.lex_state = 253},
  [211] = {.lex_state = 253},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 253},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 253},
  [218] = {.lex_state = 253},
  [219] = {.lex_state = 253},
  [220] = {.lex_state = 253},
  [221] = {.lex_state = 253},
  [222] = {.lex_state = 253},
  [223] = {.lex_state = 253},
  [224] = {.lex_state = 253},
  [225] = {.lex_state = 253},
  [226] = {.lex_state = 253},
  [227] = {.lex_state = 253},
  [228] = {.lex_state = 253},
  [229] = {.lex_state = 253},
  [230] = {.lex_state = 253},
  [231] = {.lex_state = 253},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 253},
  [234] = {.lex_state = 253},
  [235] = {.lex_state = 253},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 253},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 253},
  [281] = {.lex_state = 253},
  [282] = {.lex_state = 253},
  [283] = {.lex_state = 253},
  [284] = {.lex_state = 253},
  [285] = {.lex_state = 253},
  [286] = {.lex_state = 253},
  [287] = {.lex_state = 253},
  [288] = {.lex_state = 253},
  [289] = {.lex_state = 253},
  [290] = {.lex_state = 253},
  [291] = {.lex_state = 253},
  [292] = {.lex_state = 253},
  [293] = {.lex_state = 253},
  [294] = {.lex_state = 253},
  [295] = {.lex_state = 253},
  [296] = {.lex_state = 253},
  [297] = {.lex_state = 253},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 253},
  [301] = {.lex_state = 253},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 253},
  [304] = {.lex_state = 253},
  [305] = {.lex_state = 253},
  [306] = {.lex_state = 253},
  [307] = {.lex_state = 253},
  [308] = {.lex_state = 253},
  [309] = {.lex_state = 253},
  [310] = {.lex_state = 253},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 253},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 253},
  [315] = {.lex_state = 253},
  [316] = {.lex_state = 253},
  [317] = {.lex_state = 253},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 253},
  [322] = {.lex_state = 253},
  [323] = {.lex_state = 253},
  [324] = {.lex_state = 253},
  [325] = {.lex_state = 253},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 3},
  [332] = {.lex_state = 253},
  [333] = {.lex_state = 253},
  [334] = {.lex_state = 253},
  [335] = {.lex_state = 253},
  [336] = {.lex_state = 253},
  [337] = {.lex_state = 253},
  [338] = {.lex_state = 253},
  [339] = {.lex_state = 253},
  [340] = {.lex_state = 253},
  [341] = {.lex_state = 253},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 253},
  [345] = {.lex_state = 253},
  [346] = {.lex_state = 253},
  [347] = {.lex_state = 253},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 253},
  [350] = {.lex_state = 253},
  [351] = {.lex_state = 3},
  [352] = {.lex_state = 253},
  [353] = {.lex_state = 253},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 253},
  [356] = {.lex_state = 253},
  [357] = {.lex_state = 253},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 253},
  [360] = {.lex_state = 3},
  [361] = {.lex_state = 3},
  [362] = {.lex_state = 3},
  [363] = {.lex_state = 3},
  [364] = {.lex_state = 3},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 253},
  [367] = {.lex_state = 3},
  [368] = {.lex_state = 253},
  [369] = {.lex_state = 253},
  [370] = {.lex_state = 253},
  [371] = {.lex_state = 253},
  [372] = {.lex_state = 253},
  [373] = {.lex_state = 253},
  [374] = {.lex_state = 253},
  [375] = {.lex_state = 253},
  [376] = {.lex_state = 253},
  [377] = {.lex_state = 253},
  [378] = {.lex_state = 3},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 253},
  [382] = {.lex_state = 253},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 253},
  [388] = {.lex_state = 253},
  [389] = {.lex_state = 253},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 253},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 4},
  [394] = {.lex_state = 253},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 253},
  [397] = {.lex_state = 253},
  [398] = {.lex_state = 253},
  [399] = {.lex_state = 253},
  [400] = {.lex_state = 253},
  [401] = {.lex_state = 253},
  [402] = {.lex_state = 253},
  [403] = {.lex_state = 253},
  [404] = {.lex_state = 253},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 253},
  [407] = {.lex_state = 253},
  [408] = {.lex_state = 253},
  [409] = {.lex_state = 253},
  [410] = {.lex_state = 253},
  [411] = {.lex_state = 253},
  [412] = {.lex_state = 253},
  [413] = {.lex_state = 253},
  [414] = {.lex_state = 253},
  [415] = {.lex_state = 3},
  [416] = {.lex_state = 253},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 253},
  [419] = {.lex_state = 4},
  [420] = {.lex_state = 253},
  [421] = {.lex_state = 3},
  [422] = {.lex_state = 3},
  [423] = {.lex_state = 253},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 253},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_edgedb] = ACTIONS(1),
    [anon_sym_extension] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(420),
    [sym_module] = STATE(306),
    [aux_sym_source_file_repeat1] = STATE(306),
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [50] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(19), 4,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [97] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [144] = 11,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 22,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [207] = 12,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 21,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_PIPE_PIPE,
  [272] = 3,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [319] = 5,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 29,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [370] = 9,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 23,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [429] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(51), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [476] = 10,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 23,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [537] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(55), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [584] = 11,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 22,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [647] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 31,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [696] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(47), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [743] = 6,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 27,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [796] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [843] = 8,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(47), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 25,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [900] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(63), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 34,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
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
    STATE(309), 1,
      sym_returnspec,
    STATE(324), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1721] = 11,
    ACTIONS(111), 1,
      anon_sym_optional,
    ACTIONS(113), 1,
      anon_sym_setof,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(308), 1,
      sym_returnspec,
    STATE(324), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1778] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_scalartype,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(65), 2,
      sym_enum,
      sym_type,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1830] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(123), 1,
      anon_sym_scalartype,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(71), 2,
      sym_enum,
      sym_type,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1882] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(74), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1930] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(348), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [1978] = 9,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(313), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2028] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(318), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2076] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(393), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2124] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(83), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2172] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(108), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2220] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(76), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2268] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(133), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2316] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(77), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2364] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(315), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2412] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(107), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2460] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(342), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2508] = 8,
    ACTIONS(119), 1,
      anon_sym_array,
    ACTIONS(121), 1,
      anon_sym_tuple,
    STATE(114), 1,
      sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(57), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(117), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(58), 3,
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
  [2556] = 14,
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
    STATE(225), 1,
      sym_modifier,
    STATE(234), 1,
      aux_sym_scalar_type_def_repeat1,
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
  [2614] = 14,
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
    STATE(225), 1,
      sym_modifier,
    STATE(234), 1,
      aux_sym_scalar_type_def_repeat1,
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
  [2672] = 14,
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
    STATE(225), 1,
      sym_modifier,
    STATE(234), 1,
      aux_sym_scalar_type_def_repeat1,
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
    STATE(50), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [2730] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(184), 1,
      anon_sym_COLON_EQ,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_extending,
    STATE(92), 1,
      sym_extending,
    STATE(120), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(180), 17,
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
  [2775] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(192), 1,
      anon_sym_DASH_GT,
    ACTIONS(194), 1,
      anon_sym_COLON_EQ,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_extending,
    STATE(129), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(190), 17,
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
  [2820] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(198), 24,
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
  [2851] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(200), 24,
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
  [2882] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(202), 24,
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
  [2913] = 2,
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
  [2944] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 24,
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
  [2975] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 24,
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
  [3006] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 24,
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
  [3037] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(214), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      anon_sym_COLON_EQ,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_extending,
    STATE(121), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(212), 17,
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
  [3082] = 9,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(222), 1,
      anon_sym_DASH_GT,
    ACTIONS(224), 1,
      anon_sym_COLON_EQ,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_extending,
    STATE(131), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(220), 17,
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
  [3127] = 4,
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
  [3161] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(64), 1,
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
  [3195] = 4,
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
  [3229] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_DASH_GT,
    ACTIONS(243), 1,
      anon_sym_COLON_EQ,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(239), 17,
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
  [3268] = 5,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3303] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(249), 22,
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
  [3332] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
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
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3367] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(253), 22,
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
  [3396] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(255), 22,
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
  [3425] = 7,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      anon_sym_COLON_EQ,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(101), 1,
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
  [3464] = 11,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      anon_sym_link,
    ACTIONS(270), 1,
      anon_sym_property,
    ACTIONS(273), 1,
      anon_sym_annotation,
    ACTIONS(276), 1,
      anon_sym_constraint,
    ACTIONS(279), 1,
      anon_sym_index,
    STATE(235), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(255), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(73), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(282), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3510] = 6,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_COLON_EQ,
    STATE(123), 1,
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
  [3546] = 15,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3600] = 6,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_COLON_EQ,
    STATE(135), 1,
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
  [3636] = 6,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_COLON_EQ,
    STATE(125), 1,
      sym_declarations,
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
  [3672] = 15,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3726] = 11,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      anon_sym_index,
    STATE(235), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(255), 1,
      sym_modifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(73), 6,
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
  [3772] = 11,
    ACTIONS(162), 1,
      anon_sym_link,
    ACTIONS(164), 1,
      anon_sym_property,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(168), 1,
      anon_sym_constraint,
    ACTIONS(301), 1,
      anon_sym_index,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(255), 1,
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
  [3818] = 4,
    ACTIONS(307), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(322), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(305), 19,
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
  [3850] = 4,
    ACTIONS(311), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(340), 1,
      sym__scalar_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(309), 19,
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
  [3882] = 6,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    STATE(115), 1,
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
  [3918] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3967] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    STATE(130), 1,
      sym_extending,
    STATE(194), 1,
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
  [4002] = 6,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    STATE(110), 1,
      sym_extending,
    STATE(211), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(319), 16,
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
  [4037] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(321), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4086] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4134] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4182] = 4,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 17,
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
  [4212] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4260] = 4,
    ACTIONS(337), 1,
      anon_sym_DASH_GT,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 17,
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
  [4290] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4338] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4386] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4434] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4482] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4530] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4578] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4626] = 13,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(27), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(43), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(37), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4674] = 3,
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
  [4701] = 8,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_annotation,
    ACTIONS(362), 1,
      anon_sym_using,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(365), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4738] = 8,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(127), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4775] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(112), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4812] = 8,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4849] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
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
  [4876] = 3,
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
  [4903] = 3,
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
  [4930] = 2,
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
  [4955] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 16,
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
  [4984] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5021] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5058] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 18,
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
  [5083] = 3,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 17,
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
  [5110] = 3,
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
  [5137] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(395), 18,
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
  [5162] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(111), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5199] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5236] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(401), 18,
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
  [5261] = 3,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 17,
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
  [5288] = 3,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(239), 17,
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
  [5315] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(105), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5352] = 3,
    ACTIONS(81), 1,
      anon_sym_SEMI,
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
  [5379] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(405), 18,
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
  [5404] = 3,
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
  [5431] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(118), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5468] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(375), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(102), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5505] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(409), 18,
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
  [5530] = 3,
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
  [5557] = 4,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 16,
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
  [5586] = 3,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 17,
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
  [5613] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(413), 18,
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
  [5638] = 3,
    ACTIONS(417), 1,
      anon_sym_SEMI,
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
  [5665] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(419), 18,
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
  [5690] = 3,
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
  [5717] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5753] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(335), 17,
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
  [5777] = 2,
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
  [5801] = 2,
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
  [5825] = 2,
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
  [5849] = 2,
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
  [5873] = 2,
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
  [5897] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(167), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5933] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(327), 17,
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
  [5957] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5993] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(427), 17,
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
  [6017] = 2,
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
  [6041] = 2,
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
  [6065] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 17,
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
  [6089] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(136), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6125] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6161] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(187), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6197] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(437), 17,
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
  [6221] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6257] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(441), 17,
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
  [6281] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(443), 17,
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
  [6305] = 2,
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
  [6329] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6365] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 17,
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
  [6389] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(449), 17,
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
  [6413] = 2,
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
  [6437] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(451), 17,
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
  [6461] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(239), 17,
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
  [6485] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(186), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6521] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(154), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6557] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(453), 17,
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
  [6581] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6617] = 2,
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
  [6641] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(178), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6677] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(158), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6713] = 2,
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
  [6737] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(461), 17,
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
  [6761] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(190), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6797] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(465), 17,
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
  [6821] = 2,
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
  [6845] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(391), 17,
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
  [6869] = 2,
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
  [6893] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6929] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(467), 17,
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
  [6953] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(469), 17,
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
  [6977] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(471), 17,
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
  [7001] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(473), 17,
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
  [7025] = 8,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      anon_sym_annotation,
    ACTIONS(480), 1,
      anon_sym_using,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(483), 7,
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
    ACTIONS(489), 17,
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
  [7085] = 2,
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
  [7109] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7145] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7181] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(145), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7217] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(497), 17,
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
  [7241] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(183), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7277] = 8,
    ACTIONS(373), 1,
      anon_sym_annotation,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_using,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(280), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(151), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(377), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7313] = 2,
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
  [7337] = 2,
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
  [7360] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(411), 16,
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
  [7383] = 2,
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
  [7406] = 2,
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
  [7429] = 2,
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
  [7452] = 2,
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
  [7475] = 2,
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
  [7498] = 2,
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
  [7521] = 2,
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
  [7544] = 2,
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
  [7567] = 2,
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
  [7590] = 2,
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
  [7613] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(523), 16,
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
  [7636] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(525), 16,
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
  [7659] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(527), 16,
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
  [7682] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(529), 16,
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
  [7705] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(531), 16,
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
  [7728] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(533), 16,
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
  [7751] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 16,
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
  [7774] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(535), 1,
      anon_sym_COLON_EQ,
    ACTIONS(537), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(228), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [7805] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(539), 1,
      anon_sym_COLON_EQ,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(224), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [7836] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(543), 1,
      anon_sym_COLON_EQ,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(227), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [7867] = 6,
    ACTIONS(549), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(552), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [7896] = 7,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(555), 1,
      anon_sym_COLON_EQ,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(226), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [7927] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(559), 13,
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
  [7947] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(230), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [7975] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8003] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(563), 13,
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
  [8023] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(219), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8051] = 2,
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
  [8071] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(569), 13,
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
  [8091] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8119] = 4,
    ACTIONS(573), 1,
      anon_sym_type,
    ACTIONS(577), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(575), 11,
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
  [8143] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8171] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8199] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8227] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(585), 13,
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
  [8247] = 6,
    ACTIONS(166), 1,
      anon_sym_annotation,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(215), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(282), 2,
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
  [8275] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 13,
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
  [8295] = 3,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(591), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(593), 10,
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
  [8317] = 4,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(233), 2,
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
  [8341] = 7,
    ACTIONS(600), 1,
      anon_sym_scalar,
    ACTIONS(602), 1,
      anon_sym_link,
    ACTIONS(604), 1,
      anon_sym_property,
    ACTIONS(606), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(233), 2,
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
  [8371] = 6,
    ACTIONS(602), 1,
      anon_sym_link,
    ACTIONS(604), 1,
      anon_sym_property,
    ACTIONS(606), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(233), 2,
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
  [8398] = 9,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(78), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8431] = 3,
    ACTIONS(389), 1,
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
  [8451] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8481] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8511] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8541] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8571] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8601] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8631] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8661] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8691] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8721] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8751] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(84), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8781] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(97), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8811] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8841] = 3,
    ACTIONS(624), 1,
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
  [8861] = 3,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 10,
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
  [8881] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8911] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(98), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8941] = 3,
    ACTIONS(577), 1,
      anon_sym_constraint,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(575), 10,
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
  [8961] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(93), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [8991] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(95), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9021] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9051] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(94), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9081] = 3,
    ACTIONS(383), 1,
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
  [9101] = 3,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(632), 10,
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
  [9121] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(91), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9151] = 3,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(634), 10,
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
  [9171] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(88), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9201] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(96), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9231] = 3,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 10,
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
  [9251] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(87), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9281] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9311] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(75), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9341] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(89), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9371] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9401] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(13), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9431] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9461] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9491] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9521] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9551] = 3,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(642), 10,
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
  [9571] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9601] = 8,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(612), 1,
      anon_sym_global,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(618), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_fncall,
      sym_binary_expression,
      sym_string,
  [9631] = 4,
    ACTIONS(644), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(233), 2,
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
  [9652] = 11,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_on,
    ACTIONS(654), 1,
      anon_sym_except,
    STATE(284), 1,
      sym_argspec,
    STATE(293), 1,
      sym_on,
    STATE(301), 1,
      sym_except,
    STATE(341), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9687] = 4,
    ACTIONS(606), 1,
      anon_sym_annotation,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(233), 2,
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
  [9708] = 11,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      anon_sym_on,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    STATE(285), 1,
      sym_argspec,
    STATE(286), 1,
      sym_on,
    STATE(294), 1,
      sym_except,
    STATE(336), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9743] = 9,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(652), 1,
      anon_sym_on,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      sym_on,
    STATE(296), 1,
      sym_except,
    STATE(334), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9772] = 9,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(652), 1,
      anon_sym_on,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    STATE(290), 1,
      sym_on,
    STATE(303), 1,
      sym_except,
    STATE(339), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9801] = 7,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    STATE(303), 1,
      sym_except,
    STATE(339), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9824] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9837] = 7,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(307), 1,
      sym_except,
    STATE(338), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9860] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(674), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9873] = 7,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      sym_except,
    STATE(353), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9896] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(680), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9909] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(682), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [9922] = 7,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      sym_except,
    STATE(334), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9945] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9962] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    STATE(346), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9979] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(338), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [9996] = 5,
    ACTIONS(654), 1,
      anon_sym_except,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    STATE(345), 1,
      sym_except,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10013] = 4,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(694), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10028] = 4,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(698), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10043] = 4,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
    ACTIONS(703), 1,
      anon_sym_module,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [10058] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    STATE(334), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10075] = 4,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    STATE(298), 1,
      aux_sym_string_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(708), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [10090] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    STATE(353), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10107] = 5,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    STATE(210), 1,
      sym_declarations,
    STATE(335), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10124] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_except,
  [10135] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [10150] = 5,
    ACTIONS(188), 1,
      anon_sym_extending,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    STATE(357), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10167] = 5,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_using,
    STATE(352), 1,
      sym_uselang,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10184] = 5,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_using,
    STATE(333), 1,
      sym_uselang,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10201] = 5,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_extending,
    STATE(197), 1,
      sym_declarations,
    STATE(355), 1,
      sym_extending,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10218] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_GT,
    STATE(319), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10232] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(734), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
  [10242] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10256] = 4,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10270] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(741), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_using,
  [10280] = 4,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_argspec,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10294] = 4,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10308] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_GT,
    STATE(330), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10322] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_GT,
    STATE(319), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10336] = 4,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_GT,
    STATE(329), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10350] = 4,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10364] = 4,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10378] = 4,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10392] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(767), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_using,
  [10402] = 4,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_fncall_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10416] = 4,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_GT,
    STATE(320), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10430] = 4,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_GT,
    STATE(327), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10444] = 3,
    ACTIONS(778), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10456] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_GT,
    STATE(329), 1,
      aux_sym_enum_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10470] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_GT,
    STATE(327), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10484] = 3,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10495] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10504] = 3,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10515] = 3,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10526] = 3,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10537] = 3,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10548] = 3,
    ACTIONS(652), 1,
      anon_sym_on,
    STATE(297), 1,
      sym_on,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10559] = 3,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10570] = 3,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10581] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(793), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10590] = 3,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10601] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10610] = 3,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10621] = 3,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    ACTIONS(801), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10632] = 3,
    ACTIONS(803), 1,
      anon_sym_LBRACE,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10643] = 3,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    ACTIONS(809), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10654] = 3,
    ACTIONS(811), 1,
      anon_sym_LBRACE,
    STATE(332), 1,
      sym_schema_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10665] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10674] = 3,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10685] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(817), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10694] = 3,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(819), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10705] = 3,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10716] = 3,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10727] = 3,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(827), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10738] = 3,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_declarations,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10749] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(829), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [10758] = 3,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10769] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10778] = 2,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10786] = 2,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10794] = 2,
    ACTIONS(839), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10802] = 2,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10810] = 2,
    ACTIONS(843), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10818] = 2,
    ACTIONS(845), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10826] = 2,
    ACTIONS(847), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10834] = 2,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10842] = 2,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10850] = 2,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10858] = 2,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10866] = 2,
    ACTIONS(855), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10874] = 2,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10882] = 2,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10890] = 2,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10898] = 2,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10906] = 2,
    ACTIONS(865), 1,
      anon_sym_edgedb,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10914] = 2,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10922] = 2,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10930] = 2,
    ACTIONS(869), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10938] = 2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10946] = 2,
    ACTIONS(873), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10954] = 2,
    ACTIONS(875), 1,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10962] = 2,
    ACTIONS(877), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10970] = 2,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10978] = 2,
    ACTIONS(881), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10986] = 2,
    ACTIONS(883), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [10994] = 2,
    ACTIONS(885), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11002] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11010] = 2,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11018] = 2,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11026] = 2,
    ACTIONS(889), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11034] = 2,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11042] = 2,
    ACTIONS(893), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11050] = 2,
    ACTIONS(895), 1,
      anon_sym_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11058] = 2,
    ACTIONS(897), 1,
      anon_sym_edgedb,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11066] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11074] = 2,
    ACTIONS(801), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11082] = 2,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11090] = 2,
    ACTIONS(823), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11098] = 2,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11106] = 2,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11114] = 2,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11122] = 2,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11130] = 2,
    ACTIONS(678), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11138] = 2,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11146] = 2,
    ACTIONS(913), 1,
      anon_sym_DASH_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11154] = 2,
    ACTIONS(915), 1,
      anon_sym_using,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11162] = 2,
    ACTIONS(917), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11170] = 2,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11178] = 2,
    ACTIONS(716), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11186] = 2,
    ACTIONS(809), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11194] = 2,
    ACTIONS(921), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11202] = 2,
    ACTIONS(923), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11210] = 2,
    ACTIONS(925), 1,
      anon_sym_LT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11218] = 2,
    ACTIONS(927), 1,
      anon_sym_enum,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11226] = 2,
    ACTIONS(929), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11234] = 2,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11242] = 2,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11250] = 2,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11258] = 2,
    ACTIONS(937), 1,
      anon_sym_DASH_GT,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11266] = 2,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11274] = 2,
    ACTIONS(941), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11282] = 2,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11290] = 2,
    ACTIONS(945), 1,
      anon_sym_type,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11298] = 2,
    ACTIONS(947), 1,
      anon_sym_COLON_EQ,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
  [11306] = 2,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 537,
  [SMALL_STATE(13)] = 584,
  [SMALL_STATE(14)] = 647,
  [SMALL_STATE(15)] = 696,
  [SMALL_STATE(16)] = 743,
  [SMALL_STATE(17)] = 796,
  [SMALL_STATE(18)] = 843,
  [SMALL_STATE(19)] = 900,
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
  [SMALL_STATE(33)] = 1778,
  [SMALL_STATE(34)] = 1830,
  [SMALL_STATE(35)] = 1882,
  [SMALL_STATE(36)] = 1930,
  [SMALL_STATE(37)] = 1978,
  [SMALL_STATE(38)] = 2028,
  [SMALL_STATE(39)] = 2076,
  [SMALL_STATE(40)] = 2124,
  [SMALL_STATE(41)] = 2172,
  [SMALL_STATE(42)] = 2220,
  [SMALL_STATE(43)] = 2268,
  [SMALL_STATE(44)] = 2316,
  [SMALL_STATE(45)] = 2364,
  [SMALL_STATE(46)] = 2412,
  [SMALL_STATE(47)] = 2460,
  [SMALL_STATE(48)] = 2508,
  [SMALL_STATE(49)] = 2556,
  [SMALL_STATE(50)] = 2614,
  [SMALL_STATE(51)] = 2672,
  [SMALL_STATE(52)] = 2730,
  [SMALL_STATE(53)] = 2775,
  [SMALL_STATE(54)] = 2820,
  [SMALL_STATE(55)] = 2851,
  [SMALL_STATE(56)] = 2882,
  [SMALL_STATE(57)] = 2913,
  [SMALL_STATE(58)] = 2944,
  [SMALL_STATE(59)] = 2975,
  [SMALL_STATE(60)] = 3006,
  [SMALL_STATE(61)] = 3037,
  [SMALL_STATE(62)] = 3082,
  [SMALL_STATE(63)] = 3127,
  [SMALL_STATE(64)] = 3161,
  [SMALL_STATE(65)] = 3195,
  [SMALL_STATE(66)] = 3229,
  [SMALL_STATE(67)] = 3268,
  [SMALL_STATE(68)] = 3303,
  [SMALL_STATE(69)] = 3332,
  [SMALL_STATE(70)] = 3367,
  [SMALL_STATE(71)] = 3396,
  [SMALL_STATE(72)] = 3425,
  [SMALL_STATE(73)] = 3464,
  [SMALL_STATE(74)] = 3510,
  [SMALL_STATE(75)] = 3546,
  [SMALL_STATE(76)] = 3600,
  [SMALL_STATE(77)] = 3636,
  [SMALL_STATE(78)] = 3672,
  [SMALL_STATE(79)] = 3726,
  [SMALL_STATE(80)] = 3772,
  [SMALL_STATE(81)] = 3818,
  [SMALL_STATE(82)] = 3850,
  [SMALL_STATE(83)] = 3882,
  [SMALL_STATE(84)] = 3918,
  [SMALL_STATE(85)] = 3967,
  [SMALL_STATE(86)] = 4002,
  [SMALL_STATE(87)] = 4037,
  [SMALL_STATE(88)] = 4086,
  [SMALL_STATE(89)] = 4134,
  [SMALL_STATE(90)] = 4182,
  [SMALL_STATE(91)] = 4212,
  [SMALL_STATE(92)] = 4260,
  [SMALL_STATE(93)] = 4290,
  [SMALL_STATE(94)] = 4338,
  [SMALL_STATE(95)] = 4386,
  [SMALL_STATE(96)] = 4434,
  [SMALL_STATE(97)] = 4482,
  [SMALL_STATE(98)] = 4530,
  [SMALL_STATE(99)] = 4578,
  [SMALL_STATE(100)] = 4626,
  [SMALL_STATE(101)] = 4674,
  [SMALL_STATE(102)] = 4701,
  [SMALL_STATE(103)] = 4738,
  [SMALL_STATE(104)] = 4775,
  [SMALL_STATE(105)] = 4812,
  [SMALL_STATE(106)] = 4849,
  [SMALL_STATE(107)] = 4876,
  [SMALL_STATE(108)] = 4903,
  [SMALL_STATE(109)] = 4930,
  [SMALL_STATE(110)] = 4955,
  [SMALL_STATE(111)] = 4984,
  [SMALL_STATE(112)] = 5021,
  [SMALL_STATE(113)] = 5058,
  [SMALL_STATE(114)] = 5083,
  [SMALL_STATE(115)] = 5110,
  [SMALL_STATE(116)] = 5137,
  [SMALL_STATE(117)] = 5162,
  [SMALL_STATE(118)] = 5199,
  [SMALL_STATE(119)] = 5236,
  [SMALL_STATE(120)] = 5261,
  [SMALL_STATE(121)] = 5288,
  [SMALL_STATE(122)] = 5315,
  [SMALL_STATE(123)] = 5352,
  [SMALL_STATE(124)] = 5379,
  [SMALL_STATE(125)] = 5404,
  [SMALL_STATE(126)] = 5431,
  [SMALL_STATE(127)] = 5468,
  [SMALL_STATE(128)] = 5505,
  [SMALL_STATE(129)] = 5530,
  [SMALL_STATE(130)] = 5557,
  [SMALL_STATE(131)] = 5586,
  [SMALL_STATE(132)] = 5613,
  [SMALL_STATE(133)] = 5638,
  [SMALL_STATE(134)] = 5665,
  [SMALL_STATE(135)] = 5690,
  [SMALL_STATE(136)] = 5717,
  [SMALL_STATE(137)] = 5753,
  [SMALL_STATE(138)] = 5777,
  [SMALL_STATE(139)] = 5801,
  [SMALL_STATE(140)] = 5825,
  [SMALL_STATE(141)] = 5849,
  [SMALL_STATE(142)] = 5873,
  [SMALL_STATE(143)] = 5897,
  [SMALL_STATE(144)] = 5933,
  [SMALL_STATE(145)] = 5957,
  [SMALL_STATE(146)] = 5993,
  [SMALL_STATE(147)] = 6017,
  [SMALL_STATE(148)] = 6041,
  [SMALL_STATE(149)] = 6065,
  [SMALL_STATE(150)] = 6089,
  [SMALL_STATE(151)] = 6125,
  [SMALL_STATE(152)] = 6161,
  [SMALL_STATE(153)] = 6197,
  [SMALL_STATE(154)] = 6221,
  [SMALL_STATE(155)] = 6257,
  [SMALL_STATE(156)] = 6281,
  [SMALL_STATE(157)] = 6305,
  [SMALL_STATE(158)] = 6329,
  [SMALL_STATE(159)] = 6365,
  [SMALL_STATE(160)] = 6389,
  [SMALL_STATE(161)] = 6413,
  [SMALL_STATE(162)] = 6437,
  [SMALL_STATE(163)] = 6461,
  [SMALL_STATE(164)] = 6485,
  [SMALL_STATE(165)] = 6521,
  [SMALL_STATE(166)] = 6557,
  [SMALL_STATE(167)] = 6581,
  [SMALL_STATE(168)] = 6617,
  [SMALL_STATE(169)] = 6641,
  [SMALL_STATE(170)] = 6677,
  [SMALL_STATE(171)] = 6713,
  [SMALL_STATE(172)] = 6737,
  [SMALL_STATE(173)] = 6761,
  [SMALL_STATE(174)] = 6797,
  [SMALL_STATE(175)] = 6821,
  [SMALL_STATE(176)] = 6845,
  [SMALL_STATE(177)] = 6869,
  [SMALL_STATE(178)] = 6893,
  [SMALL_STATE(179)] = 6929,
  [SMALL_STATE(180)] = 6953,
  [SMALL_STATE(181)] = 6977,
  [SMALL_STATE(182)] = 7001,
  [SMALL_STATE(183)] = 7025,
  [SMALL_STATE(184)] = 7061,
  [SMALL_STATE(185)] = 7085,
  [SMALL_STATE(186)] = 7109,
  [SMALL_STATE(187)] = 7145,
  [SMALL_STATE(188)] = 7181,
  [SMALL_STATE(189)] = 7217,
  [SMALL_STATE(190)] = 7241,
  [SMALL_STATE(191)] = 7277,
  [SMALL_STATE(192)] = 7313,
  [SMALL_STATE(193)] = 7337,
  [SMALL_STATE(194)] = 7360,
  [SMALL_STATE(195)] = 7383,
  [SMALL_STATE(196)] = 7406,
  [SMALL_STATE(197)] = 7429,
  [SMALL_STATE(198)] = 7452,
  [SMALL_STATE(199)] = 7475,
  [SMALL_STATE(200)] = 7498,
  [SMALL_STATE(201)] = 7521,
  [SMALL_STATE(202)] = 7544,
  [SMALL_STATE(203)] = 7567,
  [SMALL_STATE(204)] = 7590,
  [SMALL_STATE(205)] = 7613,
  [SMALL_STATE(206)] = 7636,
  [SMALL_STATE(207)] = 7659,
  [SMALL_STATE(208)] = 7682,
  [SMALL_STATE(209)] = 7705,
  [SMALL_STATE(210)] = 7728,
  [SMALL_STATE(211)] = 7751,
  [SMALL_STATE(212)] = 7774,
  [SMALL_STATE(213)] = 7805,
  [SMALL_STATE(214)] = 7836,
  [SMALL_STATE(215)] = 7867,
  [SMALL_STATE(216)] = 7896,
  [SMALL_STATE(217)] = 7927,
  [SMALL_STATE(218)] = 7947,
  [SMALL_STATE(219)] = 7975,
  [SMALL_STATE(220)] = 8003,
  [SMALL_STATE(221)] = 8023,
  [SMALL_STATE(222)] = 8051,
  [SMALL_STATE(223)] = 8071,
  [SMALL_STATE(224)] = 8091,
  [SMALL_STATE(225)] = 8119,
  [SMALL_STATE(226)] = 8143,
  [SMALL_STATE(227)] = 8171,
  [SMALL_STATE(228)] = 8199,
  [SMALL_STATE(229)] = 8227,
  [SMALL_STATE(230)] = 8247,
  [SMALL_STATE(231)] = 8275,
  [SMALL_STATE(232)] = 8295,
  [SMALL_STATE(233)] = 8317,
  [SMALL_STATE(234)] = 8341,
  [SMALL_STATE(235)] = 8371,
  [SMALL_STATE(236)] = 8398,
  [SMALL_STATE(237)] = 8431,
  [SMALL_STATE(238)] = 8451,
  [SMALL_STATE(239)] = 8481,
  [SMALL_STATE(240)] = 8511,
  [SMALL_STATE(241)] = 8541,
  [SMALL_STATE(242)] = 8571,
  [SMALL_STATE(243)] = 8601,
  [SMALL_STATE(244)] = 8631,
  [SMALL_STATE(245)] = 8661,
  [SMALL_STATE(246)] = 8691,
  [SMALL_STATE(247)] = 8721,
  [SMALL_STATE(248)] = 8751,
  [SMALL_STATE(249)] = 8781,
  [SMALL_STATE(250)] = 8811,
  [SMALL_STATE(251)] = 8841,
  [SMALL_STATE(252)] = 8861,
  [SMALL_STATE(253)] = 8881,
  [SMALL_STATE(254)] = 8911,
  [SMALL_STATE(255)] = 8941,
  [SMALL_STATE(256)] = 8961,
  [SMALL_STATE(257)] = 8991,
  [SMALL_STATE(258)] = 9021,
  [SMALL_STATE(259)] = 9051,
  [SMALL_STATE(260)] = 9081,
  [SMALL_STATE(261)] = 9101,
  [SMALL_STATE(262)] = 9121,
  [SMALL_STATE(263)] = 9151,
  [SMALL_STATE(264)] = 9171,
  [SMALL_STATE(265)] = 9201,
  [SMALL_STATE(266)] = 9231,
  [SMALL_STATE(267)] = 9251,
  [SMALL_STATE(268)] = 9281,
  [SMALL_STATE(269)] = 9311,
  [SMALL_STATE(270)] = 9341,
  [SMALL_STATE(271)] = 9371,
  [SMALL_STATE(272)] = 9401,
  [SMALL_STATE(273)] = 9431,
  [SMALL_STATE(274)] = 9461,
  [SMALL_STATE(275)] = 9491,
  [SMALL_STATE(276)] = 9521,
  [SMALL_STATE(277)] = 9551,
  [SMALL_STATE(278)] = 9571,
  [SMALL_STATE(279)] = 9601,
  [SMALL_STATE(280)] = 9631,
  [SMALL_STATE(281)] = 9652,
  [SMALL_STATE(282)] = 9687,
  [SMALL_STATE(283)] = 9708,
  [SMALL_STATE(284)] = 9743,
  [SMALL_STATE(285)] = 9772,
  [SMALL_STATE(286)] = 9801,
  [SMALL_STATE(287)] = 9824,
  [SMALL_STATE(288)] = 9837,
  [SMALL_STATE(289)] = 9860,
  [SMALL_STATE(290)] = 9873,
  [SMALL_STATE(291)] = 9896,
  [SMALL_STATE(292)] = 9909,
  [SMALL_STATE(293)] = 9922,
  [SMALL_STATE(294)] = 9945,
  [SMALL_STATE(295)] = 9962,
  [SMALL_STATE(296)] = 9979,
  [SMALL_STATE(297)] = 9996,
  [SMALL_STATE(298)] = 10013,
  [SMALL_STATE(299)] = 10028,
  [SMALL_STATE(300)] = 10043,
  [SMALL_STATE(301)] = 10058,
  [SMALL_STATE(302)] = 10075,
  [SMALL_STATE(303)] = 10090,
  [SMALL_STATE(304)] = 10107,
  [SMALL_STATE(305)] = 10124,
  [SMALL_STATE(306)] = 10135,
  [SMALL_STATE(307)] = 10150,
  [SMALL_STATE(308)] = 10167,
  [SMALL_STATE(309)] = 10184,
  [SMALL_STATE(310)] = 10201,
  [SMALL_STATE(311)] = 10218,
  [SMALL_STATE(312)] = 10232,
  [SMALL_STATE(313)] = 10242,
  [SMALL_STATE(314)] = 10256,
  [SMALL_STATE(315)] = 10270,
  [SMALL_STATE(316)] = 10280,
  [SMALL_STATE(317)] = 10294,
  [SMALL_STATE(318)] = 10308,
  [SMALL_STATE(319)] = 10322,
  [SMALL_STATE(320)] = 10336,
  [SMALL_STATE(321)] = 10350,
  [SMALL_STATE(322)] = 10364,
  [SMALL_STATE(323)] = 10378,
  [SMALL_STATE(324)] = 10392,
  [SMALL_STATE(325)] = 10402,
  [SMALL_STATE(326)] = 10416,
  [SMALL_STATE(327)] = 10430,
  [SMALL_STATE(328)] = 10444,
  [SMALL_STATE(329)] = 10456,
  [SMALL_STATE(330)] = 10470,
  [SMALL_STATE(331)] = 10484,
  [SMALL_STATE(332)] = 10495,
  [SMALL_STATE(333)] = 10504,
  [SMALL_STATE(334)] = 10515,
  [SMALL_STATE(335)] = 10526,
  [SMALL_STATE(336)] = 10537,
  [SMALL_STATE(337)] = 10548,
  [SMALL_STATE(338)] = 10559,
  [SMALL_STATE(339)] = 10570,
  [SMALL_STATE(340)] = 10581,
  [SMALL_STATE(341)] = 10590,
  [SMALL_STATE(342)] = 10601,
  [SMALL_STATE(343)] = 10610,
  [SMALL_STATE(344)] = 10621,
  [SMALL_STATE(345)] = 10632,
  [SMALL_STATE(346)] = 10643,
  [SMALL_STATE(347)] = 10654,
  [SMALL_STATE(348)] = 10665,
  [SMALL_STATE(349)] = 10674,
  [SMALL_STATE(350)] = 10685,
  [SMALL_STATE(351)] = 10694,
  [SMALL_STATE(352)] = 10705,
  [SMALL_STATE(353)] = 10716,
  [SMALL_STATE(354)] = 10727,
  [SMALL_STATE(355)] = 10738,
  [SMALL_STATE(356)] = 10749,
  [SMALL_STATE(357)] = 10758,
  [SMALL_STATE(358)] = 10769,
  [SMALL_STATE(359)] = 10778,
  [SMALL_STATE(360)] = 10786,
  [SMALL_STATE(361)] = 10794,
  [SMALL_STATE(362)] = 10802,
  [SMALL_STATE(363)] = 10810,
  [SMALL_STATE(364)] = 10818,
  [SMALL_STATE(365)] = 10826,
  [SMALL_STATE(366)] = 10834,
  [SMALL_STATE(367)] = 10842,
  [SMALL_STATE(368)] = 10850,
  [SMALL_STATE(369)] = 10858,
  [SMALL_STATE(370)] = 10866,
  [SMALL_STATE(371)] = 10874,
  [SMALL_STATE(372)] = 10882,
  [SMALL_STATE(373)] = 10890,
  [SMALL_STATE(374)] = 10898,
  [SMALL_STATE(375)] = 10906,
  [SMALL_STATE(376)] = 10914,
  [SMALL_STATE(377)] = 10922,
  [SMALL_STATE(378)] = 10930,
  [SMALL_STATE(379)] = 10938,
  [SMALL_STATE(380)] = 10946,
  [SMALL_STATE(381)] = 10954,
  [SMALL_STATE(382)] = 10962,
  [SMALL_STATE(383)] = 10970,
  [SMALL_STATE(384)] = 10978,
  [SMALL_STATE(385)] = 10986,
  [SMALL_STATE(386)] = 10994,
  [SMALL_STATE(387)] = 11002,
  [SMALL_STATE(388)] = 11010,
  [SMALL_STATE(389)] = 11018,
  [SMALL_STATE(390)] = 11026,
  [SMALL_STATE(391)] = 11034,
  [SMALL_STATE(392)] = 11042,
  [SMALL_STATE(393)] = 11050,
  [SMALL_STATE(394)] = 11058,
  [SMALL_STATE(395)] = 11066,
  [SMALL_STATE(396)] = 11074,
  [SMALL_STATE(397)] = 11082,
  [SMALL_STATE(398)] = 11090,
  [SMALL_STATE(399)] = 11098,
  [SMALL_STATE(400)] = 11106,
  [SMALL_STATE(401)] = 11114,
  [SMALL_STATE(402)] = 11122,
  [SMALL_STATE(403)] = 11130,
  [SMALL_STATE(404)] = 11138,
  [SMALL_STATE(405)] = 11146,
  [SMALL_STATE(406)] = 11154,
  [SMALL_STATE(407)] = 11162,
  [SMALL_STATE(408)] = 11170,
  [SMALL_STATE(409)] = 11178,
  [SMALL_STATE(410)] = 11186,
  [SMALL_STATE(411)] = 11194,
  [SMALL_STATE(412)] = 11202,
  [SMALL_STATE(413)] = 11210,
  [SMALL_STATE(414)] = 11218,
  [SMALL_STATE(415)] = 11226,
  [SMALL_STATE(416)] = 11234,
  [SMALL_STATE(417)] = 11242,
  [SMALL_STATE(418)] = 11250,
  [SMALL_STATE(419)] = 11258,
  [SMALL_STATE(420)] = 11266,
  [SMALL_STATE(421)] = 11274,
  [SMALL_STATE(422)] = 11282,
  [SMALL_STATE(423)] = 11290,
  [SMALL_STATE(424)] = 11298,
  [SMALL_STATE(425)] = 11306,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 5, .production_id = 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 5, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 3, .production_id = 7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 3, .production_id = 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fncall, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fncall, 4, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(364),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(423),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(380),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(361),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(360),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(386),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(417),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(362),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(220),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6), SHIFT_REPEAT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(380),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(361),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(360),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(386),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(337),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(220),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(421),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(331),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(220),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(424),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 9, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 7, .production_id = 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(421),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(425),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(220),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(424),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(360),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(220),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uselang, 2, .production_id = 9),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uselang, 2, .production_id = 9),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(220),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 7),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 7),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(299),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(363),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(248),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(36),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fncall_repeat1, 2), SHIFT_REPEAT(267),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(367),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(392),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [939] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
