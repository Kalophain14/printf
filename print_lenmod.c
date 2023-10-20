#include <stdarg.h>
#include "main.h"

/**
 * length_modifier - Handles l and h length modifiers
 * @args: va_list containing the corresponding argument
 * @s: pointer to a constant string
 * Return: Number of characters printed
 */

int length_modifier(va_list args, const char *s)
{
	int count = 0;

	if (!s || !s[0])
		return (count);
	if (s[0] == 'l')
	{
		s++;
		if (s[0] == 'd' || s[0] == 'i')
		{
			long num = va_arg(args, long);

			print_number(num);
		}
	}
	else if (s[0] == 'h')
	{
		s++;
		if (s[0] == 'd' || s[0] == 'i')
		{
			short num = (short)va_arg(args, int);

			print_number(num);
		}
	}
return (count);
}
