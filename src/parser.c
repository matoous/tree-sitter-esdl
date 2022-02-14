#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_type = 4,
  anon_sym_abstract = 5,
  anon_sym_extending = 6,
  anon_sym_required = 7,
  anon_sym_optional = 8,
  anon_sym_single = 9,
  anon_sym_multi = 10,
  anon_sym_property = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_SEMI = 13,
  anon_sym_link = 14,
  anon_sym_str = 15,
  anon_sym_int64 = 16,
  sym_identifier = 17,
  sym_true = 18,
  sym_false = 19,
  sym_null = 20,
  sym_comment = 21,
  sym__whitespace = 22,
  sym_source_file = 23,
  sym_module = 24,
  sym_schema_declarations = 25,
  sym_type = 26,
  sym_abstract = 27,
  sym_extends = 28,
  sym_declarations = 29,
  sym_property = 30,
  sym_link = 31,
  sym__type = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_schema_declarations_repeat1 = 34,
  aux_sym_declarations_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_abstract] = "abstract",
  [anon_sym_extending] = "extending",
  [anon_sym_required] = "required",
  [anon_sym_optional] = "optional",
  [anon_sym_single] = "single",
  [anon_sym_multi] = "multi",
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
  [sym_abstract] = "abstract",
  [sym_extends] = "extends",
  [sym_declarations] = "declarations",
  [sym_property] = "property",
  [sym_link] = "link",
  [sym__type] = "_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_declarations_repeat1] = "schema_declarations_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_extending] = anon_sym_extending,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_single] = anon_sym_single,
  [anon_sym_multi] = anon_sym_multi,
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
  [sym_abstract] = sym_abstract,
  [sym_extends] = sym_extends,
  [sym_declarations] = sym_declarations,
  [sym_property] = sym_property,
  [sym_link] = sym_link,
  [sym__type] = sym__type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_declarations_repeat1] = aux_sym_schema_declarations_repeat1,
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
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extending] = {
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
  [sym_abstract] = {
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
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_modifiers = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_modifiers] = "modifiers",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_modifiers, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '4') ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'q') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_extending);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_single);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_extending] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_single] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
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
    [sym_source_file] = STATE(52),
    [sym_module] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
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
    ACTIONS(13), 1,
      anon_sym_property,
    ACTIONS(15), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(3), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(11), 5,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
  [26] = 6,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_property,
    ACTIONS(25), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(3), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(19), 5,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
  [52] = 6,
    ACTIONS(13), 1,
      anon_sym_property,
    ACTIONS(15), 1,
      anon_sym_link,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(2), 3,
      sym_property,
      sym_link,
      aux_sym_declarations_repeat1,
    ACTIONS(11), 5,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
  [78] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(30), 8,
      anon_sym_RBRACE,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_property,
      anon_sym_link,
  [93] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(32), 8,
      anon_sym_RBRACE,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_property,
      anon_sym_link,
  [108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(34), 8,
      anon_sym_RBRACE,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_property,
      anon_sym_link,
  [123] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(36), 8,
      anon_sym_RBRACE,
      anon_sym_abstract,
      anon_sym_required,
      anon_sym_optional,
      anon_sym_single,
      anon_sym_multi,
      anon_sym_property,
      anon_sym_link,
  [138] = 6,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_type,
    ACTIONS(42), 1,
      anon_sym_abstract,
    STATE(49), 1,
      sym_abstract,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [159] = 6,
    ACTIONS(40), 1,
      anon_sym_type,
    ACTIONS(42), 1,
      anon_sym_abstract,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_abstract,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(9), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [180] = 6,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_abstract,
    STATE(49), 1,
      sym_abstract,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(11), 2,
      sym_type,
      aux_sym_schema_declarations_repeat1,
  [201] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_extending,
    STATE(20), 1,
      sym_declarations,
    STATE(26), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [218] = 3,
    STATE(47), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(58), 3,
      anon_sym_str,
      anon_sym_int64,
      sym_identifier,
  [231] = 3,
    STATE(45), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(60), 3,
      anon_sym_str,
      anon_sym_int64,
      sym_identifier,
  [244] = 4,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(17), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [259] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_extending,
    STATE(23), 1,
      sym_declarations,
    STATE(30), 1,
      sym_extends,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [276] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(17), 2,
      sym_module,
      aux_sym_source_file_repeat1,
  [291] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(69), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [311] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [321] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(75), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [331] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(77), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [341] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_abstract,
  [351] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [360] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [369] = 3,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [380] = 3,
    ACTIONS(85), 1,
      anon_sym_property,
    ACTIONS(87), 1,
      anon_sym_link,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [391] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [400] = 3,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_schema_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [411] = 3,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_declarations,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [422] = 2,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [430] = 2,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [438] = 2,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [446] = 2,
    ACTIONS(99), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [454] = 2,
    ACTIONS(101), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [462] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [470] = 2,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [478] = 2,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [486] = 2,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [494] = 2,
    ACTIONS(111), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [502] = 2,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [510] = 2,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [518] = 2,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [526] = 2,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [534] = 2,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [542] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [550] = 2,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [558] = 2,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [566] = 2,
    ACTIONS(129), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [574] = 2,
    ACTIONS(131), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [582] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [590] = 2,
    ACTIONS(135), 1,
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
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 400,
  [SMALL_STATE(30)] = 411,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 430,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 470,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 486,
  [SMALL_STATE(40)] = 494,
  [SMALL_STATE(41)] = 502,
  [SMALL_STATE(42)] = 510,
  [SMALL_STATE(43)] = 518,
  [SMALL_STATE(44)] = 526,
  [SMALL_STATE(45)] = 534,
  [SMALL_STATE(46)] = 542,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 558,
  [SMALL_STATE(49)] = 566,
  [SMALL_STATE(50)] = 574,
  [SMALL_STATE(51)] = 582,
  [SMALL_STATE(52)] = 590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(27),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(31),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(38),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(51),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_declarations_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_declarations, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
