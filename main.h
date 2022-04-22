#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct structFormat - structure that maps formats with functions
 * @type: type of format
 * @f: function pointer
 */
typedef struct structFormat
{
	char *type;
	int (*f)(va_list);
} structFormat;

int _printf(const char *format, ...);
int print_operations(const char *format, structFormat *opsArr, va_list args);
int _putchar(char c);
int print_char(va_list character);
int print_string(va_list string);

#endif
