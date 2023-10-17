#include <stdarg.h>
#include "main.h"

/**
 * print_non_printable - Prints ASCII codes in hexadecimal
 * @types: List of arguments
 * Return: Number of characters printed
 */

int print_non_printable(va_list types)
{
	char *str = va_arg(types, char *);
	int length = 0;

	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
	}
	else
	{
		length = _strlen(str);
	}

	for (int i = 0; i < length; i++)
	{
		char c = str[i];

		if (is_printable(c))
			_putchar(c);
		else
			length += append_hexa_code(c);
	}

	return (length);
}
