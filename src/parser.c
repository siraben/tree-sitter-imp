#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  sym_skip = 1,
  anon_sym_COLON_EQ = 2,
  sym_id = 3,
  anon_sym_SEMI = 4,
  anon_sym_if = 5,
  anon_sym_then = 6,
  anon_sym_else = 7,
  anon_sym_end = 8,
  anon_sym_while = 9,
  anon_sym_do = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_EQ = 18,
  anon_sym_EQ_LT = 19,
  anon_sym_TILDE = 20,
  anon_sym_AMP_AMP = 21,
  sym_num = 22,
  sym_program = 23,
  sym_stmt = 24,
  sym_asgn = 25,
  sym_seq = 26,
  sym_if = 27,
  sym_while = 28,
  sym_aexp = 29,
  sym_plus = 30,
  sym_minus = 31,
  sym_times = 32,
  sym_bexp = 33,
  sym_eqb = 34,
  sym_leb = 35,
  sym_negb = 36,
  sym_andb = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_skip] = "skip",
  [anon_sym_COLON_EQ] = ":=",
  [sym_id] = "id",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_LT] = "=<",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP_AMP] = "&&",
  [sym_num] = "num",
  [sym_program] = "program",
  [sym_stmt] = "stmt",
  [sym_asgn] = "asgn",
  [sym_seq] = "seq",
  [sym_if] = "if",
  [sym_while] = "while",
  [sym_aexp] = "aexp",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_times] = "times",
  [sym_bexp] = "bexp",
  [sym_eqb] = "eqb",
  [sym_leb] = "leb",
  [sym_negb] = "negb",
  [sym_andb] = "andb",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_skip] = sym_skip,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_id] = sym_id,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_LT] = anon_sym_EQ_LT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [sym_num] = sym_num,
  [sym_program] = sym_program,
  [sym_stmt] = sym_stmt,
  [sym_asgn] = sym_asgn,
  [sym_seq] = sym_seq,
  [sym_if] = sym_if,
  [sym_while] = sym_while,
  [sym_aexp] = sym_aexp,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_times] = sym_times,
  [sym_bexp] = sym_bexp,
  [sym_eqb] = sym_eqb,
  [sym_leb] = sym_leb,
  [sym_negb] = sym_negb,
  [sym_andb] = sym_andb,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_skip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_asgn] = {
    .visible = true,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_aexp] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_times] = {
    .visible = true,
    .named = true,
  },
  [sym_bexp] = {
    .visible = true,
    .named = true,
  },
  [sym_eqb] = {
    .visible = true,
    .named = true,
  },
  [sym_leb] = {
    .visible = true,
    .named = true,
  },
  [sym_negb] = {
    .visible = true,
    .named = true,
  },
  [sym_andb] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequent = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequent] = "consequent",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_condition, 1},
  [2] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_consequent, 3},
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
  [13] = 12,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 15,
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
  [49] = 41,
  [50] = 41,
  [51] = 51,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(68);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_skip);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_skip);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(46);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'k') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_id);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_if);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_else);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_end);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_while);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_skip] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_LT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(51),
    [sym_stmt] = STATE(48),
    [sym_asgn] = STATE(35),
    [sym_seq] = STATE(35),
    [sym_if] = STATE(35),
    [sym_while] = STATE(35),
    [sym_skip] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym_num,
    STATE(31), 1,
      sym_aexp,
    STATE(42), 1,
      sym_bexp,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(40), 4,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [34] = 9,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym_num,
    STATE(32), 1,
      sym_aexp,
    STATE(46), 1,
      sym_bexp,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(40), 4,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [68] = 9,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym_num,
    STATE(32), 1,
      sym_aexp,
    STATE(45), 1,
      sym_bexp,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(40), 4,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [102] = 9,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym_num,
    STATE(32), 1,
      sym_aexp,
    STATE(36), 1,
      sym_bexp,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(40), 4,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [136] = 9,
    ACTIONS(11), 1,
      sym_id,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(19), 1,
      sym_num,
    STATE(32), 1,
      sym_aexp,
    STATE(37), 1,
      sym_bexp,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
    STATE(40), 4,
      sym_eqb,
      sym_leb,
      sym_negb,
      sym_andb,
  [170] = 3,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(21), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [190] = 2,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(27), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [208] = 2,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(31), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [226] = 3,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(35), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [246] = 2,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(39), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_LT,
      anon_sym_AMP_AMP,
  [264] = 8,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(50), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [292] = 8,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_else,
    STATE(49), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [320] = 7,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(41), 1,
      sym_stmt,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [346] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(49), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [368] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(47), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [390] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(50), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [412] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(41), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [434] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(44), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [456] = 6,
    ACTIONS(3), 1,
      sym_skip,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_while,
    STATE(43), 1,
      sym_stmt,
    STATE(35), 4,
      sym_asgn,
      sym_seq,
      sym_if,
      sym_while,
  [478] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [494] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [510] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [526] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [542] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [558] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [574] = 4,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(49), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [590] = 4,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(55), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [606] = 4,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [622] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_aexp,
    ACTIONS(19), 2,
      sym_id,
      sym_num,
    STATE(8), 3,
      sym_plus,
      sym_minus,
      sym_times,
  [638] = 6,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(63), 1,
      anon_sym_EQ_LT,
  [657] = 5,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(63), 1,
      anon_sym_EQ_LT,
  [673] = 1,
    ACTIONS(65), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [680] = 4,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [693] = 1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [700] = 1,
    ACTIONS(69), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [707] = 2,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 3,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
  [716] = 1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [723] = 1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_end,
  [730] = 1,
    ACTIONS(79), 4,
      anon_sym_then,
      anon_sym_do,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
  [737] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_SEMI,
  [744] = 2,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [751] = 2,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_else,
  [758] = 2,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_end,
  [765] = 2,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(95), 1,
      anon_sym_do,
  [772] = 2,
    ACTIONS(73), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 1,
      anon_sym_then,
  [779] = 2,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_end,
  [786] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [793] = 2,
    ACTIONS(81), 1,
      anon_sym_else,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [800] = 2,
    ACTIONS(81), 1,
      anon_sym_end,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [807] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [811] = 1,
    ACTIONS(111), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 434,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 494,
  [SMALL_STATE(23)] = 510,
  [SMALL_STATE(24)] = 526,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 622,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 657,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 680,
  [SMALL_STATE(35)] = 693,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 707,
  [SMALL_STATE(38)] = 716,
  [SMALL_STATE(39)] = 723,
  [SMALL_STATE(40)] = 730,
  [SMALL_STATE(41)] = 737,
  [SMALL_STATE(42)] = 744,
  [SMALL_STATE(43)] = 751,
  [SMALL_STATE(44)] = 758,
  [SMALL_STATE(45)] = 765,
  [SMALL_STATE(46)] = 772,
  [SMALL_STATE(47)] = 779,
  [SMALL_STATE(48)] = 786,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 800,
  [SMALL_STATE(51)] = 807,
  [SMALL_STATE(52)] = 811,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aexp, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aexp, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_times, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_times, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aexp, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aexp, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seq, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leb, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eqb, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asgn, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bexp, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negb, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_andb, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bexp, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_imp(void) {
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
