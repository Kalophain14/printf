#include <stdarg.h>
#include "main.h"
/**
 * print_pointer - prints pointer
 * @val: stores arguements to be printed
 * Return: pointer stored
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	int r, b;
	long int t;

	p = va_arg(val, void *);

	if (p == NULL)
	{
		for (r = 0; s[r] != '\0' r++)
			_putchar(s[r]);
		return (r);
	}
	t = (unsigned long int)p; /**cast from void to hex*/
	_putchar('0');
	_putchar('x');
	b = print_hexip(t);
	return (b + 2);
}
