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
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_type = 4,
  anon_sym_extending = 5,
  anon_sym_COMMA = 6,
  anon_sym_required = 7,
  anon_sym_optional = 8,
  anon_sym_single = 9,
  anon_sym_multi = 10,
  anon_sym_abstract = 11,
  anon_sym_delegated = 12,
  anon_sym_inheritable = 13,
  anon_sym_COLON = 14,
  anon_sym___subject__ = 15,
  anon_sym_annotation = 16,
  anon_sym_COLON_EQ = 17,
  anon_sym_SEMI = 18,
  anon_sym_property = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_link = 21,
  anon_sym_contraint = 22,
  anon_sym_on = 23,
  anon_sym_using = 24,
  anon_sym_errmessage = 25,
  sym_str = 26,
  anon_sym_str = 27,
  anon_sym_bool = 28,
  anon_sym_int16 = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_float32 = 32,
  anon_sym_float64 = 33,
  anon_sym_bigint = 34,
  anon_sym_decimal = 35,
  anon_sym_json = 36,
  anon_sym_uuid = 37,
  anon_sym_bytes = 38,
  anon_sym_datetime = 39,
  anon_sym_duration = 40,
  anon_sym_cal_COLON_COLONlocal_datetime = 41,
  anon_sym_cal_COLON_COLONlocal_date = 42,
  anon_sym_cal_COLON_COLONlocal_time = 43,
  anon_sym_cal_COLON_COLONrelative_duration = 44,
  anon_sym_sequence = 45,
  anon_sym_anytype = 46,
  anon_sym_array = 47,
  anon_sym_LT = 48,
  anon_sym_GT = 49,
  anon_sym_tuple = 50,
  anon_sym_scalartype = 51,
  anon_sym_TODO = 52,
  anon_sym_enum = 53,
  sym_identifier = 54,
  sym_true = 55,
  sym_false = 56,
  sym_null = 57,
  sym_comment = 58,
  sym__whitespace = 59,
  sym_source_file = 60,
  sym_module = 61,
  sym_schema_declarations = 62,
  sym_object_type = 63,
  sym_extends = 64,
  sym_declarations = 65,
  sym_modifier = 66,
  sym_property = 67,
  sym_link = 68,
  sym__scalar_type = 69,
  sym_array = 70,
  sym_tuple = 71,
  sym__tuple = 72,
  sym__named_tuple = 73,
  sym_type = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_schema_declarations_repeat1 = 76,
  aux_sym_object_type_repeat1 = 77,
  aux_sym_extends_repeat1 = 78,
  aux_sym_declarations_repeat1 = 79,
  aux_sym__tuple_repeat1 = 80,
  aux_sym__named_tuple_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_extending] = "extending",
  [anon_sym_COMMA] = ",",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
  [anon_sym_abstract] = "abstract",
  [anon_sym_delegated] = "delegated",
  [anon_sym_inheritable] = "inheritable",
  [anon_sym_COLON] = ":",
  [anon_sym___subject__] = "__subject__",
  [anon_sym_annotation] = "annotation",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_property] = "property",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_link] = "link",
  [anon_sym_contraint] = "contraint",
  [anon_sym_on] = "on",
  [anon_sym_using] = "using",
  [anon_sym_errmessage] = "errmessage",
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
  [anon_sym_TODO] = "TODO",
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
  [sym_extends] = "extends",
  [sym_declarations] = "declarations",
  [sym_modifier] = "modifier",
  [sym_property] = "property",
  [sym_link] = "link",
  [sym__scalar_type] = "_scalar_type",
  [sym_array] = "array",
  [sym_tuple] = "tuple",
  [sym__tuple] = "_tuple",
  [sym__named_tuple] = "_named_tuple",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_object_type_repeat1] = "object_type_repeat1",
  [aux_sym_extends_repeat1] = "extends_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym__tuple_repeat1] = "_tuple_repeat1",
  [aux_sym__named_tuple_repeat1] = "_named_tuple_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_delegated] = anon_sym_delegated,
  [anon_sym_inheritable] = anon_sym_inheritable,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym___subject__] = anon_sym___subject__,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_contraint] = anon_sym_contraint,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_errmessage] = anon_sym_errmessage,
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
  [anon_sym_TODO] = anon_sym_TODO,
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
  [sym_extends] = sym_extends,
  [sym_declarations] = sym_declarations,
  [sym_modifier] = sym_modifier,
  [sym_property] = sym_property,
  [sym_link] = sym_link,
  [sym__scalar_type] = sym__scalar_type,
  [sym_array] = sym_array,
  [sym_tuple] = sym_tuple,
  [sym__tuple] = sym__tuple,
  [sym__named_tuple] = sym__named_tuple,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_object_type_repeat1] = aux_sym_object_type_repeat1,
  [aux_sym_extends_repeat1] = aux_sym_extends_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym__tuple_repeat1] = aux_sym__tuple_repeat1,
  [aux_sym__named_tuple_repeat1] = aux_sym__named_tuple_repeat1,
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
  [anon_sym_extending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegated] = {
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
  [anon_sym___subject__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errmessage] = {
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
  [anon_sym_TODO] = {
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
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
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
  [aux_sym_object_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extends_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
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
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(232);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '<') ADVANCE(298);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'j') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'j') ADVANCE(361);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(266);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(270);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(268);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(272);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(264);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(303);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 114:
      if (lookahead == 'j') ADVANCE(86);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 172:
      if (lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'q') ADVANCE(224);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 227:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_delegated);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_inheritable);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym___subject__);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_contraint);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_errmessage);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_anytype);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_anytype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(311);
      if (lookahead == '3') ADVANCE(306);
      if (lookahead == '6') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(307);
      if (lookahead == '6') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'u') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'y') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_delegated] = ACTIONS(1),
    [anon_sym_inheritable] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym___subject__] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_contraint] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_errmessage] = ACTIONS(1),
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
    [anon_sym_scalartype] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym_module] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(33), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [48] = 9,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(36), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 17,
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
  [98] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(61), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [146] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(71), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [194] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(68), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [242] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(51), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [290] = 8,
    ACTIONS(13), 1,
      anon_sym_array,
    ACTIONS(15), 1,
      anon_sym_tuple,
    STATE(57), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(44), 2,
      sym__tuple,
      sym__named_tuple,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
    STATE(43), 3,
      sym__scalar_type,
      sym_array,
      sym_tuple,
    ACTIONS(9), 18,
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
  [338] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      anon_sym_property,
    ACTIONS(27), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(16), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(9), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(21), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [370] = 7,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      anon_sym_property,
    ACTIONS(36), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(16), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(9), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [402] = 7,
    ACTIONS(34), 1,
      anon_sym_property,
    ACTIONS(36), 1,
      anon_sym_link,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(16), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(10), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [434] = 6,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(13), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(20), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [462] = 6,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(14), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(20), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [490] = 6,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(14), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(20), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(51), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [518] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(54), 3,
      anon_sym_type,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(56), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [541] = 5,
    ACTIONS(59), 1,
      anon_sym_property,
    ACTIONS(61), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(63), 10,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
      anon_sym_property,
      anon_sym_link,
  [582] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 10,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
      anon_sym_property,
      anon_sym_link,
  [599] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 10,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
      anon_sym_property,
      anon_sym_link,
  [616] = 4,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(32), 7,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 10,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
      anon_sym_property,
      anon_sym_link,
  [654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 10,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
      anon_sym_property,
      anon_sym_link,
  [671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(75), 9,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(77), 9,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 9,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [719] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(81), 9,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(83), 9,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_delegated,
      anon_sym_inheritable,
  [751] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_extending,
    STATE(27), 1,
      sym_declarations,
    STATE(49), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [768] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(30), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [783] = 4,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(30), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [798] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_extending,
    STATE(26), 1,
      sym_declarations,
    STATE(50), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [815] = 3,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [827] = 4,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_GT,
    STATE(45), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [841] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [861] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_GT,
    STATE(38), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [875] = 4,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_GT,
    STATE(37), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [889] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_GT,
    STATE(37), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [903] = 4,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [917] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [927] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [937] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [951] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [961] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [971] = 4,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [985] = 4,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [999] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [1009] = 4,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1023] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1034] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1054] = 3,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1065] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(127), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1074] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1083] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1092] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1101] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1110] = 2,
    ACTIONS(155), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1118] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1126] = 2,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1134] = 2,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1142] = 2,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1150] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1158] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1166] = 2,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1174] = 2,
    ACTIONS(171), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1182] = 2,
    ACTIONS(173), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1190] = 2,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1198] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1206] = 2,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1214] = 2,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1222] = 2,
    ACTIONS(183), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1230] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1238] = 2,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1246] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1254] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1262] = 2,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1270] = 2,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1278] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1286] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1294] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1302] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 462,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 518,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 565,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 599,
  [SMALL_STATE(20)] = 616,
  [SMALL_STATE(21)] = 637,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 671,
  [SMALL_STATE(24)] = 687,
  [SMALL_STATE(25)] = 703,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 735,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 768,
  [SMALL_STATE(30)] = 783,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 815,
  [SMALL_STATE(33)] = 827,
  [SMALL_STATE(34)] = 841,
  [SMALL_STATE(35)] = 851,
  [SMALL_STATE(36)] = 861,
  [SMALL_STATE(37)] = 875,
  [SMALL_STATE(38)] = 889,
  [SMALL_STATE(39)] = 903,
  [SMALL_STATE(40)] = 917,
  [SMALL_STATE(41)] = 927,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 985,
  [SMALL_STATE(47)] = 999,
  [SMALL_STATE(48)] = 1009,
  [SMALL_STATE(49)] = 1023,
  [SMALL_STATE(50)] = 1034,
  [SMALL_STATE(51)] = 1045,
  [SMALL_STATE(52)] = 1054,
  [SMALL_STATE(53)] = 1065,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1083,
  [SMALL_STATE(56)] = 1092,
  [SMALL_STATE(57)] = 1101,
  [SMALL_STATE(58)] = 1110,
  [SMALL_STATE(59)] = 1118,
  [SMALL_STATE(60)] = 1126,
  [SMALL_STATE(61)] = 1134,
  [SMALL_STATE(62)] = 1142,
  [SMALL_STATE(63)] = 1150,
  [SMALL_STATE(64)] = 1158,
  [SMALL_STATE(65)] = 1166,
  [SMALL_STATE(66)] = 1174,
  [SMALL_STATE(67)] = 1182,
  [SMALL_STATE(68)] = 1190,
  [SMALL_STATE(69)] = 1198,
  [SMALL_STATE(70)] = 1206,
  [SMALL_STATE(71)] = 1214,
  [SMALL_STATE(72)] = 1222,
  [SMALL_STATE(73)] = 1230,
  [SMALL_STATE(74)] = 1238,
  [SMALL_STATE(75)] = 1246,
  [SMALL_STATE(76)] = 1254,
  [SMALL_STATE(77)] = 1262,
  [SMALL_STATE(78)] = 1270,
  [SMALL_STATE(79)] = 1278,
  [SMALL_STATE(80)] = 1286,
  [SMALL_STATE(81)] = 1294,
  [SMALL_STATE(82)] = 1302,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(70),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(69),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(76),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_type_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_type_repeat1, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extends_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extends_repeat1, 2), SHIFT_REPEAT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_tuple, 7),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2), SHIFT_REPEAT(75),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_tuple_repeat1, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
