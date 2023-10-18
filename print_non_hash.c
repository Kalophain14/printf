#include <stdarg.h>
#include "main.h"

/**
 * print_hash - handles the '#' (hash) conversion specifier
 * @hash: argument to be printed
 * Return: Number of characters printed
 */

int print_hash(va_list hash)
{
	int number = va_arg(hash, int);
	int count = 0;

	/** Check for a positive integer */
	if (number >= 0)
	{
		_putchar('#');
		count++;
	}

	/** Print the number with a leading '#' */
	_putchar(number / 10 + '0');
	count++;

	return (count);
}
