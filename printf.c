#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete specials error
 */
int _printf(const char *format, ...)
{
	int num = 0;
	va_list args;

	structFormat operations[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	num = print_operations(format, operations, args);
	va_end(args);

	return (num);
}
