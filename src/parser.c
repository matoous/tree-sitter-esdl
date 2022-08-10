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
#define STATE_COUNT 394
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 9

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
  sym_str = 34,
  anon_sym_str = 35,
  anon_sym_bool = 36,
  anon_sym_int16 = 37,
  anon_sym_int32 = 38,
  anon_sym_int64 = 39,
  anon_sym_float32 = 40,
  anon_sym_float64 = 41,
  anon_sym_bigint = 42,
  anon_sym_decimal = 43,
  anon_sym_json = 44,
  anon_sym_uuid = 45,
  anon_sym_bytes = 46,
  anon_sym_datetime = 47,
  anon_sym_duration = 48,
  anon_sym_cal_COLON_COLONlocal_datetime = 49,
  anon_sym_cal_COLON_COLONlocal_date = 50,
  anon_sym_cal_COLON_COLONlocal_time = 51,
  anon_sym_cal_COLON_COLONrelative_duration = 52,
  anon_sym_sequence = 53,
  anon_sym_anytype = 54,
  anon_sym_array = 55,
  anon_sym_LT = 56,
  anon_sym_GT = 57,
  anon_sym_tuple = 58,
  anon_sym_scalartype = 59,
  anon_sym_enum = 60,
  sym_identifier = 61,
  sym_true = 62,
  sym_false = 63,
  sym_null = 64,
  sym_comment = 65,
  sym__whitespace = 66,
  sym_source_file = 67,
  sym_module = 68,
  sym_schema_declarations = 69,
  sym_object_type = 70,
  sym_declarations = 71,
  sym_scalar_type_def = 72,
  sym_link = 73,
  sym_property = 74,
  sym_annotation = 75,
  sym_constraint = 76,
  sym_index = 77,
  sym_alias = 78,
  sym_function = 79,
  sym_extending = 80,
  sym_using = 81,
  sym_uselang = 82,
  sym_on = 83,
  sym_except = 84,
  sym_computed = 85,
  sym_modifier = 86,
  sym_argspec = 87,
  sym_returnspec = 88,
  sym_expr = 89,
  sym__scalar_type = 90,
  sym_array = 91,
  sym_tuple = 92,
  sym__tuple = 93,
  sym__named_tuple = 94,
  sym_enum = 95,
  sym_type = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_schema_declarations_repeat1 = 98,
  aux_sym_declarations_repeat1 = 99,
  aux_sym_scalar_type_def_repeat1 = 100,
  aux_sym_annotation_repeat1 = 101,
  aux_sym_constraint_repeat1 = 102,
  aux_sym_function_repeat1 = 103,
  aux_sym_extending_repeat1 = 104,
  aux_sym_argspec_repeat1 = 105,
  aux_sym__tuple_repeat1 = 106,
  aux_sym__named_tuple_repeat1 = 107,
  aux_sym_enum_repeat1 = 108,
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
  [sym_str] = "str",
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
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
  [sym_expr] = "expr",
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
  [sym_str] = sym_str,
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
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
  [sym_expr] = sym_expr,
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
  [sym_str] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [sym_expr] = {
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
  field_name = 2,
  field_supertype = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_name] = "name",
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
  [8] = {.index = 9, .length = 1},
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
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
  [183] = 182,
  [184] = 184,
  [185] = 181,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 196,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 75,
  [206] = 64,
  [207] = 69,
  [208] = 208,
  [209] = 83,
  [210] = 98,
  [211] = 68,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
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
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 272,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 273,
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
  [386] = 336,
  [387] = 387,
  [388] = 385,
  [389] = 334,
  [390] = 318,
  [391] = 391,
  [392] = 392,
  [393] = 393,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(258);
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(282);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == ',') ADVANCE(282);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'j') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == ',') ADVANCE(282);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == '>') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'j') ADVANCE(462);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(464);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'j') ADVANCE(462);
      if (lookahead == 's') ADVANCE(385);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(309);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(313);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(311);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(315);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(307);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(265);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(279);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(88);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 125:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 194:
      if (lookahead == 'q') ADVANCE(245);
      END_STATE();
    case 195:
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 251:
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 252:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_scalar);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_annotation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_edgedb);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_except);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_overloaded);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_overloaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_single);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_multi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_inheritable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_setof);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(355);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == '6') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(351);
      if (lookahead == '6') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(463);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 'y') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 'v') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(482);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 2},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 2},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 3},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 2},
  [353] = {.lex_state = 2},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 2},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 2},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 2},
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
    [sym_str] = ACTIONS(1),
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(360),
    [sym_module] = STATE(236),
    [aux_sym_source_file_repeat1] = STATE(236),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_optional,
    ACTIONS(11), 1,
      anon_sym_setof,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(234), 1,
      sym_returnspec,
    STATE(285), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [57] = 11,
    ACTIONS(9), 1,
      anon_sym_optional,
    ACTIONS(11), 1,
      anon_sym_setof,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(233), 1,
      sym_returnspec,
    STATE(285), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [114] = 9,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(21), 1,
      anon_sym_scalartype,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(36), 2,
      sym_enum,
      sym_type,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [166] = 9,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(21), 1,
      anon_sym_scalartype,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    STATE(39), 2,
      sym_enum,
      sym_type,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [218] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(295), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [266] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(54), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [314] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(53), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [362] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(55), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [410] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(382), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [458] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(48), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [506] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(280), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [554] = 9,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(265), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 17,
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
  [604] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(50), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [652] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(274), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [700] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(49), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [748] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(56), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [796] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(44), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [844] = 8,
    ACTIONS(17), 1,
      anon_sym_array,
    ACTIONS(19), 1,
      anon_sym_tuple,
    STATE(302), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(32), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(15), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(27), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(13), 18,
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
  [892] = 14,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_scalar,
    ACTIONS(31), 1,
      anon_sym_link,
    ACTIONS(33), 1,
      anon_sym_property,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(37), 1,
      anon_sym_constraint,
    ACTIONS(39), 1,
      anon_sym_alias,
    ACTIONS(41), 1,
      anon_sym_function,
    STATE(187), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(199), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(22), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [950] = 14,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_type,
    ACTIONS(50), 1,
      anon_sym_scalar,
    ACTIONS(53), 1,
      anon_sym_link,
    ACTIONS(56), 1,
      anon_sym_property,
    ACTIONS(59), 1,
      anon_sym_annotation,
    ACTIONS(62), 1,
      anon_sym_constraint,
    ACTIONS(65), 1,
      anon_sym_alias,
    ACTIONS(68), 1,
      anon_sym_function,
    STATE(187), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(199), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(21), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1008] = 14,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_scalar,
    ACTIONS(31), 1,
      anon_sym_link,
    ACTIONS(33), 1,
      anon_sym_property,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(37), 1,
      anon_sym_constraint,
    ACTIONS(39), 1,
      anon_sym_alias,
    ACTIONS(41), 1,
      anon_sym_function,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(199), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
    STATE(21), 9,
      sym_object_type,
      sym_scalar_type_def,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_alias,
      sym_function,
      aux_sym_schema_declarations_repeat1,
  [1066] = 9,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DASH_GT,
    ACTIONS(82), 1,
      anon_sym_COLON_EQ,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(86), 1,
      anon_sym_extending,
    STATE(38), 1,
      sym_extending,
    STATE(66), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(78), 17,
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
  [1111] = 9,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(90), 1,
      anon_sym_DASH_GT,
    ACTIONS(92), 1,
      anon_sym_COLON_EQ,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_extending,
    STATE(63), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(88), 17,
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
  [1156] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 24,
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
  [1187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(98), 24,
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
  [1218] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(100), 24,
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
  [1249] = 9,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(104), 1,
      anon_sym_DASH_GT,
    ACTIONS(106), 1,
      anon_sym_COLON_EQ,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_extending,
    STATE(86), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(102), 17,
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
  [1294] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(110), 24,
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
  [1325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(112), 24,
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
  [1356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(114), 24,
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
  [1387] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(116), 24,
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
  [1418] = 9,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(120), 1,
      anon_sym_DASH_GT,
    ACTIONS(122), 1,
      anon_sym_COLON_EQ,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_extending,
    STATE(84), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 17,
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
  [1463] = 4,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_extending_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(126), 21,
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
  [1497] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_extending_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(131), 21,
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
  [1531] = 4,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_extending_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(135), 21,
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
  [1565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(137), 22,
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
  [1594] = 7,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_DASH_GT,
    ACTIONS(143), 1,
      anon_sym_COLON_EQ,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 17,
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
  [1633] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(147), 22,
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
  [1662] = 7,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_DASH_GT,
    ACTIONS(153), 1,
      anon_sym_COLON_EQ,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(149), 17,
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
  [1701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(157), 22,
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
  [1730] = 7,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_DASH_GT,
    ACTIONS(163), 1,
      anon_sym_COLON_EQ,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(159), 17,
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
  [1769] = 7,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_DASH_GT,
    ACTIONS(171), 1,
      anon_sym_COLON_EQ,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(167), 17,
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
  [1808] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_COLON_EQ,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(175), 17,
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
  [1844] = 11,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_link,
    ACTIONS(186), 1,
      anon_sym_property,
    ACTIONS(189), 1,
      anon_sym_annotation,
    ACTIONS(192), 1,
      anon_sym_constraint,
    ACTIONS(195), 1,
      anon_sym_index,
    STATE(204), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(213), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(45), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(198), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1890] = 11,
    ACTIONS(31), 1,
      anon_sym_link,
    ACTIONS(33), 1,
      anon_sym_property,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(37), 1,
      anon_sym_constraint,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_index,
    STATE(204), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(213), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(51), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [1936] = 4,
    ACTIONS(207), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(304), 1,
      sym__scalar_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(205), 19,
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
  [1968] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_COLON_EQ,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 17,
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
  [2004] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_COLON_EQ,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 17,
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
  [2040] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COLON_EQ,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(221), 17,
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
  [2076] = 11,
    ACTIONS(31), 1,
      anon_sym_link,
    ACTIONS(33), 1,
      anon_sym_property,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(37), 1,
      anon_sym_constraint,
    ACTIONS(203), 1,
      anon_sym_index,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_scalar_type_def_repeat1,
    STATE(213), 1,
      sym_modifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(45), 6,
      sym_link,
      sym_property,
      sym_annotation,
      sym_constraint,
      sym_index,
      aux_sym_declarations_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2122] = 4,
    ACTIONS(231), 1,
      anon_sym_cal_COLON_COLONlocal_date,
    STATE(255), 1,
      sym__scalar_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(229), 19,
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
  [2154] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_COLON_EQ,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(233), 17,
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
  [2190] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_COLON_EQ,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_declarations,
    ACTIONS(3), 2,
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
  [2226] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_COLON_EQ,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(245), 17,
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
  [2262] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_COLON_EQ,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 17,
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
  [2298] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    STATE(96), 1,
      sym_extending,
    STATE(172), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(257), 16,
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
  [2333] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    STATE(62), 1,
      sym_extending,
    STATE(180), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(259), 16,
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
  [2368] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(261), 19,
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
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2394] = 3,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(245), 17,
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
  [2421] = 3,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 17,
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
  [2448] = 4,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(263), 16,
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
  [2477] = 3,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(149), 17,
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
  [2504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(265), 18,
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
  [2529] = 3,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(267), 17,
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
  [2556] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 17,
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
  [2583] = 3,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 17,
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
  [2610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(275), 18,
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
  [2635] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(277), 18,
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
  [2660] = 3,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 17,
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
  [2687] = 3,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
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
  [2714] = 3,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 17,
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
  [2741] = 8,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2778] = 3,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(175), 17,
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
  [2805] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(289), 18,
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
  [2830] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(73), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2867] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2904] = 3,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(293), 17,
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
  [2931] = 3,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 17,
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
  [2958] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(77), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [2995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(303), 18,
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
  [3020] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3057] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(307), 18,
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
  [3082] = 3,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(159), 17,
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
  [3109] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(90), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3146] = 3,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(167), 17,
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
  [3173] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(311), 18,
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
  [3198] = 3,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(313), 17,
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
  [3225] = 3,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(317), 17,
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
  [3252] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3289] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(82), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3326] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3363] = 8,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      anon_sym_annotation,
    ACTIONS(330), 1,
      anon_sym_using,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(93), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(333), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3400] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(283), 1,
      anon_sym_using,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(92), 5,
      sym_annotation,
      sym_using,
      sym_uselang,
      sym_computed,
      aux_sym_function_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3437] = 3,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 17,
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
  [3464] = 4,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 16,
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
  [3493] = 3,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(233), 17,
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
  [3520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(345), 18,
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
  [3545] = 3,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 17,
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
  [3572] = 3,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(221), 17,
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
  [3599] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(351), 17,
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
  [3623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(353), 17,
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
  [3647] = 2,
    ACTIONS(3), 2,
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
  [3671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(233), 17,
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
  [3695] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(149), 17,
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
  [3719] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(347), 17,
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
  [3743] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(355), 17,
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
  [3767] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 17,
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
  [3791] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3827] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(126), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3863] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3899] = 2,
    ACTIONS(3), 2,
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
  [3923] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(139), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [3959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(365), 17,
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
  [3983] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(159), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4019] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(369), 17,
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
  [4079] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4115] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(373), 17,
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
  [4139] = 2,
    ACTIONS(3), 2,
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
  [4163] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(377), 17,
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
  [4187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(245), 17,
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
  [4211] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(317), 17,
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
  [4235] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(116), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(381), 17,
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
  [4295] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(313), 17,
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
  [4355] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(385), 17,
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
  [4379] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(221), 17,
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
  [4403] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4439] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(167), 17,
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
  [4463] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(139), 17,
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
  [4487] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(389), 17,
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
  [4511] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(267), 17,
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
  [4535] = 2,
    ACTIONS(3), 2,
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
  [4559] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(159), 17,
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
  [4583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(393), 17,
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
  [4607] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(149), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4643] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(271), 17,
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
  [4703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(397), 17,
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
  [4727] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4763] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(111), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4799] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(401), 17,
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
  [4823] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(118), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4859] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(297), 17,
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
  [4883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(403), 17,
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
  [4907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(293), 17,
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
  [4931] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [4967] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(142), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5003] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(407), 17,
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
  [5027] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 17,
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
  [5051] = 2,
    ACTIONS(3), 2,
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
  [5075] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(175), 17,
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
  [5099] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(109), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(215), 17,
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
  [5159] = 8,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_annotation,
    ACTIONS(418), 1,
      anon_sym_using,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(421), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(251), 17,
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
  [5219] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(157), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5255] = 2,
    ACTIONS(3), 2,
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
  [5279] = 8,
    ACTIONS(281), 1,
      anon_sym_annotation,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_using,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(217), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    STATE(130), 4,
      sym_annotation,
      sym_using,
      sym_computed,
      aux_sym_constraint_repeat1,
    ACTIONS(285), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5315] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(431), 16,
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
  [5338] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(433), 16,
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
  [5361] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(435), 16,
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
  [5384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(437), 16,
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
  [5407] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(439), 16,
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
  [5430] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(441), 16,
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
  [5453] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(443), 16,
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
  [5476] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(445), 16,
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
  [5499] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(447), 16,
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
  [5522] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(449), 16,
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
  [5545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(343), 16,
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
  [5568] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(451), 16,
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
  [5591] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(453), 16,
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
  [5614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(455), 16,
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
  [5637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(457), 16,
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
  [5660] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(459), 16,
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
  [5683] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(461), 16,
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
  [5706] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(463), 16,
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
  [5729] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(263), 16,
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
  [5752] = 7,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(465), 1,
      anon_sym_COLON_EQ,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(193), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5783] = 7,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(469), 1,
      anon_sym_COLON_EQ,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(196), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5814] = 7,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(473), 1,
      anon_sym_COLON_EQ,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5845] = 6,
    ACTIONS(479), 1,
      anon_sym_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(477), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(482), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5874] = 7,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(485), 1,
      anon_sym_COLON_EQ,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(194), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5905] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(186), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(489), 4,
      anon_sym_scalar,
      anon_sym_link,
      anon_sym_property,
      anon_sym_annotation,
    ACTIONS(491), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5929] = 7,
    ACTIONS(494), 1,
      anon_sym_scalar,
    ACTIONS(496), 1,
      anon_sym_link,
    ACTIONS(498), 1,
      anon_sym_property,
    ACTIONS(500), 1,
      anon_sym_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(186), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [5959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 13,
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
  [5979] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(504), 13,
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
  [5999] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6027] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(192), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6055] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6083] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6111] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(514), 13,
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
  [6159] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6187] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(518), 13,
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
  [6207] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(184), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6235] = 4,
    ACTIONS(522), 1,
      anon_sym_type,
    ACTIONS(526), 1,
      anon_sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 11,
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
  [6259] = 6,
    ACTIONS(35), 1,
      anon_sym_annotation,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(190), 2,
      sym_annotation,
      aux_sym_annotation_repeat1,
    STATE(214), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6287] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(530), 13,
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
  [6307] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(532), 13,
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
  [6327] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(534), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(536), 10,
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
  [6349] = 6,
    ACTIONS(496), 1,
      anon_sym_link,
    ACTIONS(498), 1,
      anon_sym_property,
    ACTIONS(500), 1,
      anon_sym_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(186), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6376] = 3,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(538), 10,
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
  [6396] = 3,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(540), 10,
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
  [6416] = 3,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(542), 10,
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
  [6436] = 3,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(546), 10,
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
  [6456] = 3,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(548), 10,
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
  [6476] = 3,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(550), 10,
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
  [6496] = 3,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(552), 10,
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
  [6516] = 3,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(556), 10,
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
  [6536] = 3,
    ACTIONS(526), 1,
      anon_sym_constraint,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(524), 10,
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
  [6556] = 4,
    ACTIONS(500), 1,
      anon_sym_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(186), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6577] = 11,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_on,
    ACTIONS(566), 1,
      anon_sym_except,
    STATE(218), 1,
      sym_argspec,
    STATE(222), 1,
      sym_on,
    STATE(230), 1,
      sym_except,
    STATE(290), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6612] = 11,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_on,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      sym_argspec,
    STATE(224), 1,
      sym_on,
    STATE(242), 1,
      sym_except,
    STATE(298), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6647] = 4,
    ACTIONS(572), 1,
      anon_sym_annotation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(186), 2,
      sym_modifier,
      aux_sym_scalar_type_def_repeat1,
    ACTIONS(43), 7,
      anon_sym_abstract,
      anon_sym_overloaded,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_inheritable,
  [6668] = 9,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(564), 1,
      anon_sym_on,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(225), 1,
      sym_on,
    STATE(231), 1,
      sym_except,
    STATE(291), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6697] = 9,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(564), 1,
      anon_sym_on,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    STATE(223), 1,
      sym_on,
    STATE(238), 1,
      sym_except,
    STATE(311), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6726] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(582), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [6739] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(584), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [6752] = 7,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      sym_except,
    STATE(291), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6775] = 7,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      sym_except,
    STATE(294), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6798] = 7,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym_except,
    STATE(311), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6821] = 7,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      sym_except,
    STATE(288), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6844] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(594), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [6857] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(596), 6,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_extending,
      anon_sym_on,
      anon_sym_except,
  [6870] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    STATE(306), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6887] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(602), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
      anon_sym_except,
  [6898] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(291), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6915] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6932] = 5,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    STATE(177), 1,
      sym_declarations,
    STATE(301), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6949] = 5,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(608), 1,
      anon_sym_using,
    STATE(300), 1,
      sym_uselang,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6966] = 5,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_using,
    STATE(309), 1,
      sym_uselang,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [6983] = 5,
    ACTIONS(566), 1,
      anon_sym_except,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    STATE(293), 1,
      sym_except,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7000] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(241), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [7015] = 5,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_extending,
    STATE(175), 1,
      sym_declarations,
    STATE(297), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7032] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(294), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7049] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    STATE(314), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7066] = 5,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_COLON,
    STATE(246), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7083] = 4,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(241), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [7098] = 5,
    ACTIONS(86), 1,
      anon_sym_extending,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      sym_extending,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7115] = 3,
    STATE(377), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7127] = 3,
    STATE(380), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7139] = 3,
    STATE(88), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7151] = 4,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7165] = 3,
    STATE(72), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7177] = 3,
    STATE(89), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7189] = 3,
    STATE(67), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7201] = 3,
    STATE(70), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7213] = 4,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_GT,
    STATE(251), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7227] = 3,
    STATE(65), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7239] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_GT,
    STATE(279), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7253] = 4,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7267] = 4,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7281] = 3,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(650), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7293] = 3,
    STATE(369), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7305] = 4,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_GT,
    STATE(278), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7319] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_GT,
    STATE(277), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7333] = 3,
    STATE(100), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7345] = 3,
    STATE(378), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7357] = 3,
    STATE(354), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7369] = 3,
    STATE(79), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7381] = 3,
    STATE(78), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7393] = 4,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_GT,
    STATE(258), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7407] = 3,
    STATE(376), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7419] = 3,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7431] = 4,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_argspec_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7445] = 3,
    STATE(74), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7457] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(673), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_extending,
  [7467] = 3,
    STATE(97), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7479] = 3,
    STATE(388), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7491] = 3,
    STATE(336), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7503] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(675), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_using,
  [7513] = 3,
    STATE(385), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7525] = 3,
    STATE(60), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7537] = 4,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_GT,
    STATE(251), 1,
      aux_sym_enum_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7551] = 4,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_GT,
    STATE(278), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7565] = 4,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_GT,
    STATE(279), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7579] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_GT,
    STATE(253), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7593] = 3,
    STATE(386), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7605] = 3,
    STATE(61), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7617] = 3,
    STATE(71), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7629] = 3,
    STATE(99), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(691), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_using,
  [7651] = 4,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_argspec,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7665] = 3,
    STATE(95), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(637), 2,
      sym_str,
      sym_identifier,
  [7677] = 3,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7688] = 3,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7699] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7710] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7721] = 3,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    ACTIONS(701), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7732] = 3,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7743] = 3,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7754] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7763] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [7772] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7783] = 3,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7794] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [7803] = 3,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7814] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7834] = 3,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7845] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(715), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7854] = 3,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7865] = 3,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7876] = 3,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7887] = 3,
    ACTIONS(564), 1,
      anon_sym_on,
    STATE(235), 1,
      sym_on,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7898] = 3,
    ACTIONS(729), 1,
      anon_sym_LBRACE,
    ACTIONS(731), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7909] = 3,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7920] = 3,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7940] = 3,
    ACTIONS(735), 1,
      anon_sym_LBRACE,
    STATE(299), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7951] = 3,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7962] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [7971] = 2,
    ACTIONS(743), 1,
      anon_sym_edgedb,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7979] = 2,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7987] = 2,
    ACTIONS(745), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [7995] = 2,
    ACTIONS(747), 1,
      anon_sym_edgedb,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8003] = 2,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8011] = 2,
    ACTIONS(751), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8019] = 2,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8027] = 2,
    ACTIONS(755), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8035] = 2,
    ACTIONS(757), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8043] = 2,
    ACTIONS(759), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8051] = 2,
    ACTIONS(761), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8059] = 2,
    ACTIONS(763), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8067] = 2,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8075] = 2,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8083] = 2,
    ACTIONS(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8091] = 2,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8099] = 2,
    ACTIONS(769), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8107] = 2,
    ACTIONS(771), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8115] = 2,
    ACTIONS(773), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8123] = 2,
    ACTIONS(775), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8131] = 2,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8139] = 2,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8147] = 2,
    ACTIONS(781), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8155] = 2,
    ACTIONS(783), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8163] = 2,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8171] = 2,
    ACTIONS(787), 1,
      anon_sym_enum,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8179] = 2,
    ACTIONS(789), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8187] = 2,
    ACTIONS(791), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8195] = 2,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8203] = 2,
    ACTIONS(795), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8211] = 2,
    ACTIONS(797), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8219] = 2,
    ACTIONS(799), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8227] = 2,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8235] = 2,
    ACTIONS(801), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8243] = 2,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8251] = 2,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8259] = 2,
    ACTIONS(803), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8267] = 2,
    ACTIONS(805), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8275] = 2,
    ACTIONS(807), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8283] = 2,
    ACTIONS(731), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8291] = 2,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8299] = 2,
    ACTIONS(811), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8307] = 2,
    ACTIONS(813), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8315] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8323] = 2,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8331] = 2,
    ACTIONS(819), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8339] = 2,
    ACTIONS(821), 1,
      anon_sym_using,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8347] = 2,
    ACTIONS(823), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8355] = 2,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8363] = 2,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8371] = 2,
    ACTIONS(827), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8379] = 2,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8387] = 2,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8395] = 2,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8403] = 2,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8411] = 2,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8419] = 2,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8427] = 2,
    ACTIONS(839), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8435] = 2,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8443] = 2,
    ACTIONS(843), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8451] = 2,
    ACTIONS(845), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8459] = 2,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8467] = 2,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8475] = 2,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8483] = 2,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8491] = 2,
    ACTIONS(855), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8499] = 2,
    ACTIONS(857), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8507] = 2,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8515] = 2,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8523] = 2,
    ACTIONS(861), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8531] = 2,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8539] = 2,
    ACTIONS(865), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8547] = 2,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8555] = 2,
    ACTIONS(869), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8563] = 2,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8571] = 2,
    ACTIONS(873), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8579] = 2,
    ACTIONS(875), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [8587] = 2,
    ACTIONS(877), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 410,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 506,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 652,
  [SMALL_STATE(16)] = 700,
  [SMALL_STATE(17)] = 748,
  [SMALL_STATE(18)] = 796,
  [SMALL_STATE(19)] = 844,
  [SMALL_STATE(20)] = 892,
  [SMALL_STATE(21)] = 950,
  [SMALL_STATE(22)] = 1008,
  [SMALL_STATE(23)] = 1066,
  [SMALL_STATE(24)] = 1111,
  [SMALL_STATE(25)] = 1156,
  [SMALL_STATE(26)] = 1187,
  [SMALL_STATE(27)] = 1218,
  [SMALL_STATE(28)] = 1249,
  [SMALL_STATE(29)] = 1294,
  [SMALL_STATE(30)] = 1325,
  [SMALL_STATE(31)] = 1356,
  [SMALL_STATE(32)] = 1387,
  [SMALL_STATE(33)] = 1418,
  [SMALL_STATE(34)] = 1463,
  [SMALL_STATE(35)] = 1497,
  [SMALL_STATE(36)] = 1531,
  [SMALL_STATE(37)] = 1565,
  [SMALL_STATE(38)] = 1594,
  [SMALL_STATE(39)] = 1633,
  [SMALL_STATE(40)] = 1662,
  [SMALL_STATE(41)] = 1701,
  [SMALL_STATE(42)] = 1730,
  [SMALL_STATE(43)] = 1769,
  [SMALL_STATE(44)] = 1808,
  [SMALL_STATE(45)] = 1844,
  [SMALL_STATE(46)] = 1890,
  [SMALL_STATE(47)] = 1936,
  [SMALL_STATE(48)] = 1968,
  [SMALL_STATE(49)] = 2004,
  [SMALL_STATE(50)] = 2040,
  [SMALL_STATE(51)] = 2076,
  [SMALL_STATE(52)] = 2122,
  [SMALL_STATE(53)] = 2154,
  [SMALL_STATE(54)] = 2190,
  [SMALL_STATE(55)] = 2226,
  [SMALL_STATE(56)] = 2262,
  [SMALL_STATE(57)] = 2298,
  [SMALL_STATE(58)] = 2333,
  [SMALL_STATE(59)] = 2368,
  [SMALL_STATE(60)] = 2394,
  [SMALL_STATE(61)] = 2421,
  [SMALL_STATE(62)] = 2448,
  [SMALL_STATE(63)] = 2477,
  [SMALL_STATE(64)] = 2504,
  [SMALL_STATE(65)] = 2529,
  [SMALL_STATE(66)] = 2556,
  [SMALL_STATE(67)] = 2583,
  [SMALL_STATE(68)] = 2610,
  [SMALL_STATE(69)] = 2635,
  [SMALL_STATE(70)] = 2660,
  [SMALL_STATE(71)] = 2687,
  [SMALL_STATE(72)] = 2714,
  [SMALL_STATE(73)] = 2741,
  [SMALL_STATE(74)] = 2778,
  [SMALL_STATE(75)] = 2805,
  [SMALL_STATE(76)] = 2830,
  [SMALL_STATE(77)] = 2867,
  [SMALL_STATE(78)] = 2904,
  [SMALL_STATE(79)] = 2931,
  [SMALL_STATE(80)] = 2958,
  [SMALL_STATE(81)] = 2995,
  [SMALL_STATE(82)] = 3020,
  [SMALL_STATE(83)] = 3057,
  [SMALL_STATE(84)] = 3082,
  [SMALL_STATE(85)] = 3109,
  [SMALL_STATE(86)] = 3146,
  [SMALL_STATE(87)] = 3173,
  [SMALL_STATE(88)] = 3198,
  [SMALL_STATE(89)] = 3225,
  [SMALL_STATE(90)] = 3252,
  [SMALL_STATE(91)] = 3289,
  [SMALL_STATE(92)] = 3326,
  [SMALL_STATE(93)] = 3363,
  [SMALL_STATE(94)] = 3400,
  [SMALL_STATE(95)] = 3437,
  [SMALL_STATE(96)] = 3464,
  [SMALL_STATE(97)] = 3493,
  [SMALL_STATE(98)] = 3520,
  [SMALL_STATE(99)] = 3545,
  [SMALL_STATE(100)] = 3572,
  [SMALL_STATE(101)] = 3599,
  [SMALL_STATE(102)] = 3623,
  [SMALL_STATE(103)] = 3647,
  [SMALL_STATE(104)] = 3671,
  [SMALL_STATE(105)] = 3695,
  [SMALL_STATE(106)] = 3719,
  [SMALL_STATE(107)] = 3743,
  [SMALL_STATE(108)] = 3767,
  [SMALL_STATE(109)] = 3791,
  [SMALL_STATE(110)] = 3827,
  [SMALL_STATE(111)] = 3863,
  [SMALL_STATE(112)] = 3899,
  [SMALL_STATE(113)] = 3923,
  [SMALL_STATE(114)] = 3959,
  [SMALL_STATE(115)] = 3983,
  [SMALL_STATE(116)] = 4019,
  [SMALL_STATE(117)] = 4055,
  [SMALL_STATE(118)] = 4079,
  [SMALL_STATE(119)] = 4115,
  [SMALL_STATE(120)] = 4139,
  [SMALL_STATE(121)] = 4163,
  [SMALL_STATE(122)] = 4187,
  [SMALL_STATE(123)] = 4211,
  [SMALL_STATE(124)] = 4235,
  [SMALL_STATE(125)] = 4271,
  [SMALL_STATE(126)] = 4295,
  [SMALL_STATE(127)] = 4331,
  [SMALL_STATE(128)] = 4355,
  [SMALL_STATE(129)] = 4379,
  [SMALL_STATE(130)] = 4403,
  [SMALL_STATE(131)] = 4439,
  [SMALL_STATE(132)] = 4463,
  [SMALL_STATE(133)] = 4487,
  [SMALL_STATE(134)] = 4511,
  [SMALL_STATE(135)] = 4535,
  [SMALL_STATE(136)] = 4559,
  [SMALL_STATE(137)] = 4583,
  [SMALL_STATE(138)] = 4607,
  [SMALL_STATE(139)] = 4643,
  [SMALL_STATE(140)] = 4679,
  [SMALL_STATE(141)] = 4703,
  [SMALL_STATE(142)] = 4727,
  [SMALL_STATE(143)] = 4763,
  [SMALL_STATE(144)] = 4799,
  [SMALL_STATE(145)] = 4823,
  [SMALL_STATE(146)] = 4859,
  [SMALL_STATE(147)] = 4883,
  [SMALL_STATE(148)] = 4907,
  [SMALL_STATE(149)] = 4931,
  [SMALL_STATE(150)] = 4967,
  [SMALL_STATE(151)] = 5003,
  [SMALL_STATE(152)] = 5027,
  [SMALL_STATE(153)] = 5051,
  [SMALL_STATE(154)] = 5075,
  [SMALL_STATE(155)] = 5099,
  [SMALL_STATE(156)] = 5135,
  [SMALL_STATE(157)] = 5159,
  [SMALL_STATE(158)] = 5195,
  [SMALL_STATE(159)] = 5219,
  [SMALL_STATE(160)] = 5255,
  [SMALL_STATE(161)] = 5279,
  [SMALL_STATE(162)] = 5315,
  [SMALL_STATE(163)] = 5338,
  [SMALL_STATE(164)] = 5361,
  [SMALL_STATE(165)] = 5384,
  [SMALL_STATE(166)] = 5407,
  [SMALL_STATE(167)] = 5430,
  [SMALL_STATE(168)] = 5453,
  [SMALL_STATE(169)] = 5476,
  [SMALL_STATE(170)] = 5499,
  [SMALL_STATE(171)] = 5522,
  [SMALL_STATE(172)] = 5545,
  [SMALL_STATE(173)] = 5568,
  [SMALL_STATE(174)] = 5591,
  [SMALL_STATE(175)] = 5614,
  [SMALL_STATE(176)] = 5637,
  [SMALL_STATE(177)] = 5660,
  [SMALL_STATE(178)] = 5683,
  [SMALL_STATE(179)] = 5706,
  [SMALL_STATE(180)] = 5729,
  [SMALL_STATE(181)] = 5752,
  [SMALL_STATE(182)] = 5783,
  [SMALL_STATE(183)] = 5814,
  [SMALL_STATE(184)] = 5845,
  [SMALL_STATE(185)] = 5874,
  [SMALL_STATE(186)] = 5905,
  [SMALL_STATE(187)] = 5929,
  [SMALL_STATE(188)] = 5959,
  [SMALL_STATE(189)] = 5979,
  [SMALL_STATE(190)] = 5999,
  [SMALL_STATE(191)] = 6027,
  [SMALL_STATE(192)] = 6055,
  [SMALL_STATE(193)] = 6083,
  [SMALL_STATE(194)] = 6111,
  [SMALL_STATE(195)] = 6139,
  [SMALL_STATE(196)] = 6159,
  [SMALL_STATE(197)] = 6187,
  [SMALL_STATE(198)] = 6207,
  [SMALL_STATE(199)] = 6235,
  [SMALL_STATE(200)] = 6259,
  [SMALL_STATE(201)] = 6287,
  [SMALL_STATE(202)] = 6307,
  [SMALL_STATE(203)] = 6327,
  [SMALL_STATE(204)] = 6349,
  [SMALL_STATE(205)] = 6376,
  [SMALL_STATE(206)] = 6396,
  [SMALL_STATE(207)] = 6416,
  [SMALL_STATE(208)] = 6436,
  [SMALL_STATE(209)] = 6456,
  [SMALL_STATE(210)] = 6476,
  [SMALL_STATE(211)] = 6496,
  [SMALL_STATE(212)] = 6516,
  [SMALL_STATE(213)] = 6536,
  [SMALL_STATE(214)] = 6556,
  [SMALL_STATE(215)] = 6577,
  [SMALL_STATE(216)] = 6612,
  [SMALL_STATE(217)] = 6647,
  [SMALL_STATE(218)] = 6668,
  [SMALL_STATE(219)] = 6697,
  [SMALL_STATE(220)] = 6726,
  [SMALL_STATE(221)] = 6739,
  [SMALL_STATE(222)] = 6752,
  [SMALL_STATE(223)] = 6775,
  [SMALL_STATE(224)] = 6798,
  [SMALL_STATE(225)] = 6821,
  [SMALL_STATE(226)] = 6844,
  [SMALL_STATE(227)] = 6857,
  [SMALL_STATE(228)] = 6870,
  [SMALL_STATE(229)] = 6887,
  [SMALL_STATE(230)] = 6898,
  [SMALL_STATE(231)] = 6915,
  [SMALL_STATE(232)] = 6932,
  [SMALL_STATE(233)] = 6949,
  [SMALL_STATE(234)] = 6966,
  [SMALL_STATE(235)] = 6983,
  [SMALL_STATE(236)] = 7000,
  [SMALL_STATE(237)] = 7015,
  [SMALL_STATE(238)] = 7032,
  [SMALL_STATE(239)] = 7049,
  [SMALL_STATE(240)] = 7066,
  [SMALL_STATE(241)] = 7083,
  [SMALL_STATE(242)] = 7098,
  [SMALL_STATE(243)] = 7115,
  [SMALL_STATE(244)] = 7127,
  [SMALL_STATE(245)] = 7139,
  [SMALL_STATE(246)] = 7151,
  [SMALL_STATE(247)] = 7165,
  [SMALL_STATE(248)] = 7177,
  [SMALL_STATE(249)] = 7189,
  [SMALL_STATE(250)] = 7201,
  [SMALL_STATE(251)] = 7213,
  [SMALL_STATE(252)] = 7227,
  [SMALL_STATE(253)] = 7239,
  [SMALL_STATE(254)] = 7253,
  [SMALL_STATE(255)] = 7267,
  [SMALL_STATE(256)] = 7281,
  [SMALL_STATE(257)] = 7293,
  [SMALL_STATE(258)] = 7305,
  [SMALL_STATE(259)] = 7319,
  [SMALL_STATE(260)] = 7333,
  [SMALL_STATE(261)] = 7345,
  [SMALL_STATE(262)] = 7357,
  [SMALL_STATE(263)] = 7369,
  [SMALL_STATE(264)] = 7381,
  [SMALL_STATE(265)] = 7393,
  [SMALL_STATE(266)] = 7407,
  [SMALL_STATE(267)] = 7419,
  [SMALL_STATE(268)] = 7431,
  [SMALL_STATE(269)] = 7445,
  [SMALL_STATE(270)] = 7457,
  [SMALL_STATE(271)] = 7467,
  [SMALL_STATE(272)] = 7479,
  [SMALL_STATE(273)] = 7491,
  [SMALL_STATE(274)] = 7503,
  [SMALL_STATE(275)] = 7513,
  [SMALL_STATE(276)] = 7525,
  [SMALL_STATE(277)] = 7537,
  [SMALL_STATE(278)] = 7551,
  [SMALL_STATE(279)] = 7565,
  [SMALL_STATE(280)] = 7579,
  [SMALL_STATE(281)] = 7593,
  [SMALL_STATE(282)] = 7605,
  [SMALL_STATE(283)] = 7617,
  [SMALL_STATE(284)] = 7629,
  [SMALL_STATE(285)] = 7641,
  [SMALL_STATE(286)] = 7651,
  [SMALL_STATE(287)] = 7665,
  [SMALL_STATE(288)] = 7677,
  [SMALL_STATE(289)] = 7688,
  [SMALL_STATE(290)] = 7699,
  [SMALL_STATE(291)] = 7710,
  [SMALL_STATE(292)] = 7721,
  [SMALL_STATE(293)] = 7732,
  [SMALL_STATE(294)] = 7743,
  [SMALL_STATE(295)] = 7754,
  [SMALL_STATE(296)] = 7763,
  [SMALL_STATE(297)] = 7772,
  [SMALL_STATE(298)] = 7783,
  [SMALL_STATE(299)] = 7794,
  [SMALL_STATE(300)] = 7803,
  [SMALL_STATE(301)] = 7814,
  [SMALL_STATE(302)] = 7825,
  [SMALL_STATE(303)] = 7834,
  [SMALL_STATE(304)] = 7845,
  [SMALL_STATE(305)] = 7854,
  [SMALL_STATE(306)] = 7865,
  [SMALL_STATE(307)] = 7876,
  [SMALL_STATE(308)] = 7887,
  [SMALL_STATE(309)] = 7898,
  [SMALL_STATE(310)] = 7909,
  [SMALL_STATE(311)] = 7920,
  [SMALL_STATE(312)] = 7931,
  [SMALL_STATE(313)] = 7940,
  [SMALL_STATE(314)] = 7951,
  [SMALL_STATE(315)] = 7962,
  [SMALL_STATE(316)] = 7971,
  [SMALL_STATE(317)] = 7979,
  [SMALL_STATE(318)] = 7987,
  [SMALL_STATE(319)] = 7995,
  [SMALL_STATE(320)] = 8003,
  [SMALL_STATE(321)] = 8011,
  [SMALL_STATE(322)] = 8019,
  [SMALL_STATE(323)] = 8027,
  [SMALL_STATE(324)] = 8035,
  [SMALL_STATE(325)] = 8043,
  [SMALL_STATE(326)] = 8051,
  [SMALL_STATE(327)] = 8059,
  [SMALL_STATE(328)] = 8067,
  [SMALL_STATE(329)] = 8075,
  [SMALL_STATE(330)] = 8083,
  [SMALL_STATE(331)] = 8091,
  [SMALL_STATE(332)] = 8099,
  [SMALL_STATE(333)] = 8107,
  [SMALL_STATE(334)] = 8115,
  [SMALL_STATE(335)] = 8123,
  [SMALL_STATE(336)] = 8131,
  [SMALL_STATE(337)] = 8139,
  [SMALL_STATE(338)] = 8147,
  [SMALL_STATE(339)] = 8155,
  [SMALL_STATE(340)] = 8163,
  [SMALL_STATE(341)] = 8171,
  [SMALL_STATE(342)] = 8179,
  [SMALL_STATE(343)] = 8187,
  [SMALL_STATE(344)] = 8195,
  [SMALL_STATE(345)] = 8203,
  [SMALL_STATE(346)] = 8211,
  [SMALL_STATE(347)] = 8219,
  [SMALL_STATE(348)] = 8227,
  [SMALL_STATE(349)] = 8235,
  [SMALL_STATE(350)] = 8243,
  [SMALL_STATE(351)] = 8251,
  [SMALL_STATE(352)] = 8259,
  [SMALL_STATE(353)] = 8267,
  [SMALL_STATE(354)] = 8275,
  [SMALL_STATE(355)] = 8283,
  [SMALL_STATE(356)] = 8291,
  [SMALL_STATE(357)] = 8299,
  [SMALL_STATE(358)] = 8307,
  [SMALL_STATE(359)] = 8315,
  [SMALL_STATE(360)] = 8323,
  [SMALL_STATE(361)] = 8331,
  [SMALL_STATE(362)] = 8339,
  [SMALL_STATE(363)] = 8347,
  [SMALL_STATE(364)] = 8355,
  [SMALL_STATE(365)] = 8363,
  [SMALL_STATE(366)] = 8371,
  [SMALL_STATE(367)] = 8379,
  [SMALL_STATE(368)] = 8387,
  [SMALL_STATE(369)] = 8395,
  [SMALL_STATE(370)] = 8403,
  [SMALL_STATE(371)] = 8411,
  [SMALL_STATE(372)] = 8419,
  [SMALL_STATE(373)] = 8427,
  [SMALL_STATE(374)] = 8435,
  [SMALL_STATE(375)] = 8443,
  [SMALL_STATE(376)] = 8451,
  [SMALL_STATE(377)] = 8459,
  [SMALL_STATE(378)] = 8467,
  [SMALL_STATE(379)] = 8475,
  [SMALL_STATE(380)] = 8483,
  [SMALL_STATE(381)] = 8491,
  [SMALL_STATE(382)] = 8499,
  [SMALL_STATE(383)] = 8507,
  [SMALL_STATE(384)] = 8515,
  [SMALL_STATE(385)] = 8523,
  [SMALL_STATE(386)] = 8531,
  [SMALL_STATE(387)] = 8539,
  [SMALL_STATE(388)] = 8547,
  [SMALL_STATE(389)] = 8555,
  [SMALL_STATE(390)] = 8563,
  [SMALL_STATE(391)] = 8571,
  [SMALL_STATE(392)] = 8579,
  [SMALL_STATE(393)] = 8587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(320),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(326),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(330),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(333),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(334),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(338),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(345),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(393),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(189),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 6), SHIFT_REPEAT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 3, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extending, 2, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extending_repeat1, 2, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(330),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(333),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(334),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(338),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(308),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(189),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 3, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 7, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 7, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 7, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(389),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(310),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(189),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(327),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 4, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 8, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 8, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 8, .production_id = 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 8, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 4, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 9, .production_id = 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 7, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 9, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 10, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 9, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 11, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 6, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(389),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(328),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(189),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(327),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 5, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 6, .production_id = 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 7, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 14, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type_def, 5, .production_id = 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 12, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 11, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 13, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 15, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(334),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_repeat1, 2), SHIFT_REPEAT(189),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 2), SHIFT_REPEAT(189),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 6),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scalar_type_def_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 7),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uselang, 2, .production_id = 8),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uselang, 2, .production_id = 8),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6, .production_id = 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5, .production_id = 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed, 4, .production_id = 7),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_computed, 4, .production_id = 7),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 5),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argspec, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(379),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 2), SHIFT_REPEAT(353),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_except, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(6),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(332),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnspec, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argspec_repeat1, 4),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [817] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
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
