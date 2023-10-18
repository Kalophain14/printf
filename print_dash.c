#include <stdarg.h>
#include "main.h"

/**
 * print_non_dash - handles the non-custom conversion specifier "-"
 * @args: the non-custom argument
 * Return: the number of characters printed
 */

int print_non_dash(va_list args)
{
    int count = 0;
    char character = va_arg(args, int);
    
    _putchar(character);
    count++;
    
    return count;
}
