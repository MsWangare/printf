#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

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
	unsigned int i;
	va_list arg;

	if (format == NULL)
		return (-1);

	i = 0;
	while (format[i] != '\0')
	{
		
		i++;
	}
}
