#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_type = 4,
  anon_sym_required = 5,
  anon_sym_optional = 6,
  anon_sym_single = 7,
  anon_sym_multi = 8,
  anon_sym_abstract = 9,
  anon_sym_property = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_SEMI = 12,
  anon_sym_link = 13,
  anon_sym_str = 14,
  anon_sym_int64 = 15,
  sym_identifier = 16,
  sym_true = 17,
  sym_false = 18,
  sym_null = 19,
  sym_comment = 20,
  sym__whitespace = 21,
  sym_source_file = 22,
  sym_module = 23,
  sym_schema_declarations = 24,
  sym_type = 25,
  sym_block = 26,
  sym_property = 27,
  sym_link = 28,
  sym__type = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_schema_declarations_repeat1 = 31,
  aux_sym_block_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
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
  [anon_sym_int64] = "int64",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_schema_declarations] = "schema_declarations",
  [sym_type] = "type",
  [sym_block] = "block",
  [sym_property] = "property",
  [sym_link] = "link",
  [sym__type] = "_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
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
  [anon_sym_int64] = anon_sym_int64,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_schema_declarations] = sym_schema_declarations,
  [sym_type] = sym_type,
  [sym_block] = sym_block,
  [sym_property] = sym_property,
  [sym_link] = sym_link,
  [sym__type] = sym__type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_int64] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym__type] = {
    .visible = false,
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
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '4') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'q') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
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
    [anon_sym_int64] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_module] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(14), 1,
      anon_sym_property,
    ACTIONS(17), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(2), 3,
      sym_property,
      sym_link,
      aux_sym_block_repeat1,
    ACTIONS(11), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [26] = 6,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      anon_sym_property,
    ACTIONS(26), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(2), 3,
      sym_property,
      sym_link,
      aux_sym_block_repeat1,
    ACTIONS(22), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [52] = 6,
    ACTIONS(24), 1,
      anon_sym_property,
    ACTIONS(26), 1,
      anon_sym_link,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(3), 3,
      sym_property,
      sym_link,
      aux_sym_block_repeat1,
    ACTIONS(22), 5,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
  [78] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(30), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [93] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(32), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(34), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [123] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(36), 8,
      anon_sym_RBRACE,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_abstract,
      anon_sym_property,
      anon_sym_link,
  [138] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [153] = 3,
    STATE(34), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(40), 3,
      anon_sym_str,
      anon_sym_int64,
      sym_identifier,
  [166] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [181] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(13), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [196] = 4,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [211] = 3,
    STATE(36), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(53), 3,
      anon_sym_str,
      anon_sym_int64,
      sym_identifier,
  [224] = 4,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(15), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [239] = 3,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [250] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(62), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [259] = 3,
    ACTIONS(64), 1,
      anon_sym_property,
    ACTIONS(66), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [270] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [279] = 3,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [290] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [308] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [317] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [326] = 2,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [334] = 2,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [342] = 2,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [350] = 2,
    ACTIONS(86), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [358] = 2,
    ACTIONS(88), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [366] = 2,
    ACTIONS(90), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [374] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [382] = 2,
    ACTIONS(94), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [390] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [398] = 2,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [406] = 2,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [414] = 2,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [422] = 2,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [430] = 2,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [438] = 2,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [446] = 2,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [454] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 239,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 308,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 342,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 374,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 390,
  [SMALL_STATE(34)] = 398,
  [SMALL_STATE(35)] = 406,
  [SMALL_STATE(36)] = 414,
  [SMALL_STATE(37)] = 422,
  [SMALL_STATE(38)] = 430,
  [SMALL_STATE(39)] = 438,
  [SMALL_STATE(40)] = 446,
  [SMALL_STATE(41)] = 454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
