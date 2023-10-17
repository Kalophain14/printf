#include <stdarg.h>
#include "main.h"
/**
 * _print_char - prints characters
 * @character: list of arguements to be printed
 * Return: 1 if found
 */

int _print_char(va_list character)
{
	char string;

	string = va_arg(character, int);
	_putchar(string);
return (1);
}
