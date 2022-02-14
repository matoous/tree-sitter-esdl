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
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  anon_sym_property = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_SEMI = 14,
  anon_sym_link = 15,
  anon_sym_str = 16,
  anon_sym_bool = 17,
  anon_sym_int16 = 18,
  anon_sym_int32 = 19,
  anon_sym_int64 = 20,
  anon_sym_float32 = 21,
  anon_sym_float64 = 22,
  anon_sym_bigint = 23,
  anon_sym_decimal = 24,
  anon_sym_json = 25,
  anon_sym_uuid = 26,
  anon_sym_bytes = 27,
  anon_sym_datetime = 28,
  anon_sym_duration = 29,
  anon_sym_cal_COLON_COLONlocal_datetime = 30,
  anon_sym_cal_COLON_COLONlocal_date = 31,
  anon_sym_cal_COLON_COLONlocal_time = 32,
  anon_sym_cal_COLON_COLONrelative_duration = 33,
  anon_sym_sequence = 34,
  anon_sym_array = 35,
  anon_sym_LT = 36,
  anon_sym_GT = 37,
  anon_sym_tuple = 38,
  anon_sym_COLON = 39,
  anon_sym_scalartype = 40,
  anon_sym_TODO = 41,
  anon_sym_enum = 42,
  sym_identifier = 43,
  sym_true = 44,
  sym_false = 45,
  sym_null = 46,
  sym_comment = 47,
  sym__whitespace = 48,
  sym_source_file = 49,
  sym_module = 50,
  sym_schema_declarations = 51,
  sym_object_type = 52,
  sym_extends = 53,
  sym_declarations = 54,
  sym_modifier = 55,
  sym_property = 56,
  sym_link = 57,
  sym__scalar_type = 58,
  sym_array = 59,
  sym_tuple = 60,
  sym__tuple = 61,
  sym__named_tuple = 62,
  sym_type = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_schema_declarations_repeat1 = 65,
  aux_sym_object_type_repeat1 = 66,
  aux_sym_extends_repeat1 = 67,
  aux_sym_declarations_repeat1 = 68,
  aux_sym__tuple_repeat1 = 69,
  aux_sym__named_tuple_repeat1 = 70,
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
  [anon_sym_property] = "property",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SEMI] = ";",
  [anon_sym_link] = "link",
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
  [anon_sym_array] = "array",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_tuple] = "tuple",
  [anon_sym_COLON] = ":",
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
  [anon_sym_property] = anon_sym_property,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_link] = anon_sym_link,
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
  [anon_sym_array] = anon_sym_array,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COLON] = {
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
      if (eof) ADVANCE(177);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'j') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(201);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(197);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 132:
      if (lookahead == 'q') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 'q') ADVANCE(170);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 173:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '3') ADVANCE(238);
      if (lookahead == '6') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(239);
      if (lookahead == '6') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 308:
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
  [32] = {.lex_state = 0},
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
  [78] = {.lex_state = 0},
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
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
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
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
      sym_identifier,
  [47] = 9,
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
    ACTIONS(9), 16,
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
  [96] = 8,
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
      sym_identifier,
  [143] = 8,
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
      sym_identifier,
  [190] = 8,
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
      sym_identifier,
  [237] = 8,
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
      sym_identifier,
  [284] = 8,
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
      sym_identifier,
  [331] = 7,
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
    ACTIONS(21), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [361] = 7,
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
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [391] = 7,
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
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [421] = 6,
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
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [447] = 6,
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
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [473] = 6,
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
    ACTIONS(51), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [499] = 4,
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
    ACTIONS(56), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [520] = 5,
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
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(63), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [557] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(65), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [572] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(67), 8,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [587] = 4,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(32), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [606] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [621] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [636] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(75), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(77), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [664] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [678] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(81), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [692] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(83), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [706] = 5,
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
  [723] = 4,
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
  [738] = 4,
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
  [753] = 5,
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
  [770] = 3,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [782] = 4,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_GT,
    STATE(45), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [796] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [806] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [816] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_GT,
    STATE(38), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [830] = 4,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_GT,
    STATE(37), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [844] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_GT,
    STATE(37), 1,
      aux_sym__tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [858] = 4,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [872] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [892] = 4,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [906] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [926] = 4,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [940] = 4,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [954] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [964] = 4,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym__named_tuple_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [978] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [989] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1009] = 3,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1020] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(127), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1029] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1038] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1047] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [1056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1065] = 2,
    ACTIONS(155), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1073] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1081] = 2,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1089] = 2,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1097] = 2,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1105] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1113] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1121] = 2,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1129] = 2,
    ACTIONS(171), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1137] = 2,
    ACTIONS(173), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1145] = 2,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1153] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1161] = 2,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1169] = 2,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1177] = 2,
    ACTIONS(183), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1185] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1193] = 2,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1201] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1209] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1217] = 2,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1225] = 2,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1233] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1241] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1249] = 2,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1257] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 391,
  [SMALL_STATE(12)] = 421,
  [SMALL_STATE(13)] = 447,
  [SMALL_STATE(14)] = 473,
  [SMALL_STATE(15)] = 499,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 557,
  [SMALL_STATE(19)] = 572,
  [SMALL_STATE(20)] = 587,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 621,
  [SMALL_STATE(23)] = 636,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 664,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 706,
  [SMALL_STATE(29)] = 723,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 753,
  [SMALL_STATE(32)] = 770,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 796,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 816,
  [SMALL_STATE(37)] = 830,
  [SMALL_STATE(38)] = 844,
  [SMALL_STATE(39)] = 858,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 882,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 906,
  [SMALL_STATE(44)] = 916,
  [SMALL_STATE(45)] = 926,
  [SMALL_STATE(46)] = 940,
  [SMALL_STATE(47)] = 954,
  [SMALL_STATE(48)] = 964,
  [SMALL_STATE(49)] = 978,
  [SMALL_STATE(50)] = 989,
  [SMALL_STATE(51)] = 1000,
  [SMALL_STATE(52)] = 1009,
  [SMALL_STATE(53)] = 1020,
  [SMALL_STATE(54)] = 1029,
  [SMALL_STATE(55)] = 1038,
  [SMALL_STATE(56)] = 1047,
  [SMALL_STATE(57)] = 1056,
  [SMALL_STATE(58)] = 1065,
  [SMALL_STATE(59)] = 1073,
  [SMALL_STATE(60)] = 1081,
  [SMALL_STATE(61)] = 1089,
  [SMALL_STATE(62)] = 1097,
  [SMALL_STATE(63)] = 1105,
  [SMALL_STATE(64)] = 1113,
  [SMALL_STATE(65)] = 1121,
  [SMALL_STATE(66)] = 1129,
  [SMALL_STATE(67)] = 1137,
  [SMALL_STATE(68)] = 1145,
  [SMALL_STATE(69)] = 1153,
  [SMALL_STATE(70)] = 1161,
  [SMALL_STATE(71)] = 1169,
  [SMALL_STATE(72)] = 1177,
  [SMALL_STATE(73)] = 1185,
  [SMALL_STATE(74)] = 1193,
  [SMALL_STATE(75)] = 1201,
  [SMALL_STATE(76)] = 1209,
  [SMALL_STATE(77)] = 1217,
  [SMALL_STATE(78)] = 1225,
  [SMALL_STATE(79)] = 1233,
  [SMALL_STATE(80)] = 1241,
  [SMALL_STATE(81)] = 1249,
  [SMALL_STATE(82)] = 1257,
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
