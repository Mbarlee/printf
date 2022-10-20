#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c)i;
int print_number(int n);
int _printf(const char *format, ...);
int print_octal(unsigned int n);
int print_unsig(unsigned int n);
int print_hexaup(unsigned int n);
int print_hexalow(unsigned int n);
int print_bi(unsigned int n);
int _printstring(char *s);
int rot13(char *point);
int print_rev(char *);
int print_hl(uintptr_t n);
#endif
