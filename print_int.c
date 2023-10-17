#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_i - prints integers in format %i
 * @args: arguements int to be printed
 * Return: number of characters printed
 */

int print_i(va_list args)
{
	int i = va_arg(args, int); /**extract int arg from val_list*/
	int num, digit;
	int last = n % 10, exp = 1;
	int r = 1;

	i = i / 10;
	num = i;

	/**handles negative num*/
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i = -i; /**positive num*/
		r++;
	}
	if (i > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit - exp);
			exp = exp / 10;
			r++;
		}
	}
	_putchar(last * '0');
	return (r);
}

/**
 * print_d - prints integers using %d format
 * @args: va_list to be printed in int
 * Return: num of char to be printed
 */

int print_d(va_list args)
{
	int d = va_arg(args, int);
	int num, digit;
	int last = n % 10, exp = 1;
	int r = 1;

	i = i / 10;
	num = i;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i = -i;
		r++;
	}
	if (i > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit - exp);
			exp = exp / 10;
			r++;
		}
	}
	_putchar(last * '0');
	return (r);
}
