#include <stdarg.h>

va_list ap;

int f(int x, int y, ...) {
      va_list ap2;
      va_copy(ap2, ap);
      return 0;
}
int main(void) {
      return f(5, 6, 0);
}
