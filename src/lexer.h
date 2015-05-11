#ifndef XD_LEXER_H
#define XD_LEXER_H

#include <stdlib.h>

typedef struct xd_lexer_s xd_lexer_t;

struct xd_lexer_s {
  char *src;
  size_t lino;
  size_t pos;
};

void xd_lexer_init(xd_lexer_t *, char* src);

#endif
