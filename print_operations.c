#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_operation - prints according to format
 * @format: format of data to be prented
 * @opsArr: a map of formats and their functions
 * @args: _printf arguments
 *
 * Description: prints data according the passed format
 *
 * Return: number of characters printed
 */
int print_operations(const char *format, structFormat *opsArr, va_list args)
{
	int i = 0, j = 0, count = 0;

	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			i++;
			j = 0;
			while (opsArr[j].type != NULL &&
			*(format + i) != *opsArr[j].type)
			{
				j++;
			}

			if (opsArr[j].type != NULL)
				count += opsArr[j].f(args);
			else
			{
				if (*(format + i) == '\0')
					return (-1);
				if (*(format + i) != '%')
					count += _putchar('%');
				count += _putchar(*(format + i));
			}
		} else
		{
			count += _putchar(*(format + i));
		}
		i++;
	}

	return (count);
}
