#include "lexer.h"

void xd_lexer_init(xd_lexer_t *lexer, char *src) {
  lexer->src = src;
  lexer->lino = 1;
  lexer->pos = 0;
}
