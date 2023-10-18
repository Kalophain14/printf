#include <stdarg.h>
#include "main.h"

/**
 * print_length_modifier - Handles l and h length modifiers
 * @format: The format string containing the conversion specifier
 * @args: va_list containing the corresponding argument
 * Return: Number of characters printed
 */

int print_length_modifier(const char *format, va_list args)
{
    int count = 0;

    if (format && format[0] == 'l')
    {
        format++;
        if (format[0] == 'd' || format[0] == 'i')
        {
            long int num = va_arg(args, long int);
            count += print_long_integer(num);
        }
        else if (format[0] == 'u' || format[0] == 'o' || format[0] == 'x' || format[0] == 'X')
        {
        }
    }
    else if (format && format[0] == 'h')
    {
        format++;
        if (format[0] == 'd' || format[0] == 'i')
        {
            short int num = va_arg(args, int);
            count += print_integer(num);
        }
        else if (format[0] == 'u' || format[0] == 'o' || format[0] == 'x' || format[0] == 'X')
	{
	}
    }
    return count;
}
