#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>


/**
 * struct print - Checks what flags need to be turned on
 * @t: the type to be printed
 * @f: the function to print
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_i(va_list i);
int print_d(va_list d);
int print_c(va_list c);
int print_s(va_list s);

#endif
