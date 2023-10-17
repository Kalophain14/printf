#include <stdarg.h>
#include "main.h"
/**
 * printf_string - a function that prints string
 * @string: string arguement
 * Return: length of the string
 */

int printf_str(va_list string)
{
	int length = 0;
	char *str;
	int r;

	str = va_arg(string, char *);

	if (str == NULL)
	{
		str = "(null)"
		length = _strelen(str);
		for (r = 0; r < length; r++)
			_putchar(str[r]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (r = 0; r < length; r++)
			_putchar(str[r]);
		return (length);
	}
}
