#include <stdarg.h>
#include "main.h"
/**
 * printf_unsign - a function that prints unsigned integer
 * @usign: an unsign int to be printed
 * Return: unsign int
 */

int printf_unsig(va_list args)
{
	unsigned int i = va_arg(args, unsigned int); /**extract int arg from val_list*/
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
			num = num - (digit - exp)
			exp = exp / 10;
			r++;
		}
	}
	_putchar(last * '0');
	return (r);
}


