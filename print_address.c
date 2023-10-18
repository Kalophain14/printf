#include <stdarg.h>
#include "main.h"

/**
 * print_address - Prints the address of the input in hexadecimal format.
 * @l: va_list arguments from _printf.
 * @f: Pointer to the struct if a flag is passed to _printf.
 * Return: The number of characters printed.
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;  /**Unused flags.*/

	if (!p)
		return (_puts("(nil)"));  /**Print "(nil)" if the pointer is NULL*/

	count += _putchar('0');
	count += _putchar('x');

	str = convert(p, 16, 1);  /**Convert address to hexadecimal string*/

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return count;
}
