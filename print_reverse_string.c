#include <stdarg.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (t = r; t > 0; t--)
  {
		_putchar(*s);
		s--;
	}
_putchar('\n');
}
