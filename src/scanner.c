#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  EDGEQL_CHARS,
};

void *tree_sitter_esdl_external_scanner_create() { return NULL; }
void tree_sitter_esdl_external_scanner_destroy(void *p) {}
void tree_sitter_esdl_external_scanner_reset(void *p) {}
unsigned tree_sitter_esdl_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_esdl_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_edgeql_chars(TSLexer *lexer) {
  lexer->result_symbol = EDGEQL_CHARS;
  int nest_count = 0;
  
  for (bool has_content;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
      case '(':
        nest_count++;
        advance(lexer);
        break;
      case ')':
        if (nest_count > 0) {
          nest_count--;
          advance(lexer);
          break;
        } else {
          return has_content;
        }
      case '\\':
        return has_content;
      case '\0':
        return false;
      default:
        advance(lexer);
    }
  }
}

bool tree_sitter_esdl_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[EDGEQL_CHARS]) {
    return scan_edgeql_chars(lexer);
  }

  return false;
}
