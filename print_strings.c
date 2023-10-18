#include <stdarg.h>
#include "main.h"

/**
 * print_string - Prints the characters in a string.
 * @l: va_list arguments from _printf.
 * @f: Pointer to the struct if a flag is passed to _printf.
 * Return: The number of characters printed.
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)"; /** Print "(null)" if the string is NULL.*/

	return (_puts(s));
}

/**
 * print_char - Prints a single character.
 * @l: va_list arguments from _printf.
 * @f: Pointer to the struct if flag is passed to _printf.
 * Return: The number of characters printed (always 1 for a character).
 */

int print_char(va_list l, flags_t *f)
{
	(void)f;

	_putchar(va_arg(l, int));

	return (1);
}
