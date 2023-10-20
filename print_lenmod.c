#include <stdarg.h>
#include "main.h"

/**
 * print_length_modifier - Handles l and h length modifiers
 * @s: The format string containing the conversion specifier
 * @args: va_list containing the corresponding argument
 * @f: Pointer to flags_t structure
 * Return: Number of characters printed
 */
int print_length_modifier(va_list args, flags_t *f)
{
  char *s;
  int count = 0;

    if (!s || !s[0])
        return 0;

    if (s[0] == 'l')
    {
        s++;
        if (s[0] == 'd' || s[0] == 'i')
        {
            long num = va_arg(args, long);
            print_number(num);
            // Assuming print_number internally counts characters printed
        }
        // Handle other 'l' modifiers here if needed
    }
    else if (s[0] == 'h')
    {
        s++;
        if (s[0] == 'd' || s[0] == 'i')
        {
            short num = (short)va_arg(args, int);
            print_number(num);
            // Assuming print_number internally counts characters printed
        }
        // Handle other 'h' modifiers here if needed
    }

    return count;
}

