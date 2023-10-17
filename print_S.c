#include <stdarg.h>
#include "main.h"

/**
 * print_s - prints string and none prin ASCII Characters
 * @val: arguemnt to be printed
 * Return: strings
 */

int print_s(va_list val)
{
	char *s;
	int r;
	int length = 0;
	int output;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] < 32 || s[r] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			output = s[r];

			/**check value is hexi 15*/
			if (output < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_hexis(output); /**function hexi counter*/
		}
		else /**prints any value stored*/
		{
			_putchar(r);
			length++;
		}
	}
return (length);
}
