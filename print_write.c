#include <stdarg.h>
#include "main.h"

/**
 * print_write - calls out buffer write
 * @c: character to be printed
 * Return: 1 is success and -1 error
 */

int print_write(char c)
{
	static char buf[1024];
	static int r;

	if (c == -1 || r >= 1024)
	{
		write(1, &buf, r);
		r = 0;
	}
	if (c != -1)
	{
		buf[r];
		r++;
	}
	return (0);
}

/**
 * _print_out - prints buffer out
 * @str: pointer to a string
 * Return: number of chars written
 */

int _print_out(char *str)
{
	register int r;

	for (r = 0; str[r] != '\0'; r++)
		_putchar(str[r]);
	return (r);
}
