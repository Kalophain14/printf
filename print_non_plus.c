#include <stdarg.h>
#include "main.h"

/**
 * print_plus - handles the '+' conversion specifier
 * @plus: argument to be printed
 * Return: Number of characters printed
 */

int print_plus(va_list plus)
{
	int number = va_arg(plus, int);
	int count = 0;

	if (number >= 0)
	{
		_putchar('+');
		count++;
	}
	_putchar(number / 10 + '0');
	count++;

	return (count);
}
