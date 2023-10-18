#include <stdarg.h>
#include "main.h"

/**
 * print_space - handles the ' ' (space) conversion specifier
 * @space: argument to be printed
 * Return: Number of characters printed
 */

int print_space(va_list space)
{
	int number = va_arg(space, int);
	int count = 0;

	if (number >= 0)
	{
		_putchar(' ');
		count++;
	}

	_putchar(number / 10 + '0');
	count++;

	return (count);
}
