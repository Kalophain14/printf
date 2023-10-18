#include <stdarg.h>
#include "main.h"

/**
 * print_non_zero - handles the '0' flag character for non-custom conversion specifiers
 * @non_zero: the non-custom argument
 * Return: the number of characters printed
 */

int print_non_zero(va_list non_zero)
{
    int count = 0;
    char character = va_arg(non_zero, int);

    _putchar('0');
    _putchar(character);
    count += 2;

    return count;
}
