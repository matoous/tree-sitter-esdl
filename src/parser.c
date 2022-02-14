#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_enum = 41,
  sym_identifier = 42,
  sym_true = 43,
  sym_false = 44,
  sym_null = 45,
  sym_comment = 46,
  sym__whitespace = 47,
  sym_source_file = 48,
  sym_module = 49,
  sym_schema_declarations = 50,
  sym_object_type = 51,
  sym_extends = 52,
  sym_declarations = 53,
  sym_modifier = 54,
  sym_property = 55,
  sym_link = 56,
  sym__scalar_type = 57,
  sym_array = 58,
  sym_type = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_schema_declarations_repeat1 = 61,
  aux_sym_object_type_repeat1 = 62,
  aux_sym_extends_repeat1 = 63,
  aux_sym_declarations_repeat1 = 64,
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
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_object_type_repeat1] = "object_type_repeat1",
  [aux_sym_extends_repeat1] = "extends_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
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
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_object_type_repeat1] = aux_sym_object_type_repeat1,
  [aux_sym_extends_repeat1] = aux_sym_extends_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(174);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '>') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'j') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '{') ADVANCE(176);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'j') ADVANCE(283);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(202);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(194);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead == 'q') ADVANCE(166);
      END_STATE();
    case 130:
      if (lookahead == 'q') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 170:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bigint);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_bigint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_uuid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_datetime);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_date);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONlocal_time);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_cal_COLON_COLONrelative_duration);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_scalartype);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '3') ADVANCE(233);
      if (lookahead == '6') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(234);
      if (lookahead == '6') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
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
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
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
    [anon_sym_enum] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_module] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_array,
    STATE(58), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(38), 2,
      sym__scalar_type,
      sym_array,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
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
  [39] = 6,
    ACTIONS(13), 1,
      anon_sym_array,
    STATE(56), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(38), 2,
      sym__scalar_type,
      sym_array,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
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
  [78] = 6,
    ACTIONS(13), 1,
      anon_sym_array,
    STATE(49), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(38), 2,
      sym__scalar_type,
      sym_array,
    ACTIONS(11), 3,
      anon_sym_cal_COLON_COLONlocal_datetime,
      anon_sym_cal_COLON_COLONlocal_time,
      anon_sym_cal_COLON_COLONrelative_duration,
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
  [117] = 7,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      anon_sym_property,
    ACTIONS(23), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(12), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(5), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(17), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [147] = 7,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_property,
    ACTIONS(32), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(12), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(5), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [177] = 7,
    ACTIONS(30), 1,
      anon_sym_property,
    ACTIONS(32), 1,
      anon_sym_link,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(12), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    STATE(6), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [207] = 6,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(9), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(18), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [233] = 6,
    ACTIONS(38), 1,
      anon_sym_type,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(10), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(18), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [259] = 6,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(10), 2,
      sym_object_type,
      aux_sym_schema_declarations_repeat1,
    STATE(18), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(47), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [285] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(50), 3,
      anon_sym_type,
      anon_sym_property,
      anon_sym_link,
    ACTIONS(52), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [306] = 5,
    ACTIONS(55), 1,
      anon_sym_property,
    ACTIONS(57), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [328] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(61), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [358] = 2,
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
  [373] = 2,
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
  [388] = 2,
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
  [403] = 4,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_modifier,
      aux_sym_object_type_repeat1,
    ACTIONS(28), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [422] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [436] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 7,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [450] = 2,
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
  [464] = 2,
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
  [478] = 2,
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
  [492] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(27), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [507] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_extending,
    STATE(23), 1,
      sym_declarations,
    STATE(32), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [524] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_extending,
    STATE(21), 1,
      sym_declarations,
    STATE(37), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [541] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(27), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [556] = 4,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [570] = 4,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [584] = 4,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_extends_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [598] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(98), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [607] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [618] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [629] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [638] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [647] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [656] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [676] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(113), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [685] = 2,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [693] = 2,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [701] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [709] = 2,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [717] = 2,
    ACTIONS(123), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [725] = 2,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [733] = 2,
    ACTIONS(127), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [741] = 2,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [749] = 2,
    ACTIONS(131), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [757] = 2,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [765] = 2,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [773] = 2,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [781] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [789] = 2,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [797] = 2,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [805] = 2,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [813] = 2,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [821] = 2,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [829] = 2,
    ACTIONS(151), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [837] = 2,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [845] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [853] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 259,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 343,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 464,
  [SMALL_STATE(23)] = 478,
  [SMALL_STATE(24)] = 492,
  [SMALL_STATE(25)] = 507,
  [SMALL_STATE(26)] = 524,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 556,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 584,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 607,
  [SMALL_STATE(33)] = 618,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 638,
  [SMALL_STATE(36)] = 647,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 667,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 693,
  [SMALL_STATE(42)] = 701,
  [SMALL_STATE(43)] = 709,
  [SMALL_STATE(44)] = 717,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 733,
  [SMALL_STATE(47)] = 741,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 757,
  [SMALL_STATE(50)] = 765,
  [SMALL_STATE(51)] = 773,
  [SMALL_STATE(52)] = 781,
  [SMALL_STATE(53)] = 789,
  [SMALL_STATE(54)] = 797,
  [SMALL_STATE(55)] = 805,
  [SMALL_STATE(56)] = 813,
  [SMALL_STATE(57)] = 821,
  [SMALL_STATE(58)] = 829,
  [SMALL_STATE(59)] = 837,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 853,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(61),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(51),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_type_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_type_repeat1, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extends_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extends_repeat1, 2), SHIFT_REPEAT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
