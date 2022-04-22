#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - prints character
 * @character: character to be printed
 *
 * Description: prints a character
 *
 * Return: number of characters printed
 */
int print_char(va_list character)
{
	char ch = va_arg(character, int);
	return (_putchar(ch));
}
