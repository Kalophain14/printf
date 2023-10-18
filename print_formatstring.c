#include <stdarg.h>
#include "main.h"

/**
 * custom_printf - Custom printf function that handles length modifiers
 * @format: The format string
 * @...: Additional arguments
 */

void custom_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            int count = print_length_modifier(format, args);
            format++;
            format++;
            format += strspn(format, "lh");
        }
        else
        {
            _putchar(*format);
            format++;
        }
    }
    va_end(args);
}
