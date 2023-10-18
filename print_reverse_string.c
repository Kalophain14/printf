#include <stdarg.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be reversed
 */

int print_rev(va_list val)
{
	char *s = va_arg(val, char*);
	int a
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
