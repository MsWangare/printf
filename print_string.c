#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_string - prints character
 * @string: string to be printed
 *
 * Description: prints the string passed
 *
 * Return: number of characters printed
 */
int print_string(va_list string)
{
	int len = 0;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "";

	while (*(str + len))
	{
		len += _putchar(str[len]);
		len++;
	}
	return (len);
}

