#include <stdarg.h>
#include "main.h"

/**
 * print_field_width - Prints a number with a specified field width
 * @field_width: The field width value
 * @args: va_list containing the number to be printed
 * Return: Number of characters printed
 */

int print_field_width(va_list args, int field_width)
{
	int count = 0;
	int num = va_arg(args, int);
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	/* Calculate the number of digits in the number */
	int num_digits = 1;
	int temp = num;
	while (temp > 9)
	{
		temp /= 10;
		num_digits++;
	}
	/** Calculate the number of spaces to print for field width */
	int spaces_to_print = field_width - num_digits;
	if (spaces_to_print > 0)
	{
		count += spaces_to_print;
		while (spaces_to_print > 0)
		{
			_putchar(' ');
			spaces_to_print--;
		}
	}
	/** Print the number */
	temp = num;
	int divisor = 1;
	while (num_digits > 1)
	{
		divisor *= 10;
		num_digits--;
	}
	while (divisor > 0)
	{
		int digit = temp / divisor;
		_putchar(digit + '0');
		temp %= divisor;
		divisor /= 10;
	}
	return (count + is_negative + num_digits);
}
