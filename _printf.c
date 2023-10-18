#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int char_count = 0;  // To keep track of the number of characters printed
    int i = 0;  // Index for iterating through the format string

    while (format && format[i])
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            char_count++;
        }
        else
        {
            i++;
            if (format[i] == '\0')
                break;

            int match_found = 0;
		
            match specifiers[] = {
                {"c", _print_char},
                {"s", print_str},
                {"%", print_37},
                {"i", print_i},
                {"d", print_d},
                {"b", print_bi},
                {"u", print_unsign},
                {"o", print_oct},
                {"x", print_hexlower},
                {"X", print_hexupper},
                {"S", print_s},
                {"p", print_pointer},
                {"+", print_plus},
                {" ", print_space},
                {"#", print_hash},
                {"r", print_rev},
                {"R", print_rot13string},
                {"m", print_non_dash},
                {"z", print_non_zero},
                {"l", print_length_modifier},
                {NULL, NULL}
            };

            for (int j = 0; specifiers[j].id; j++)
            {
                if (format[i] == specifiers[j].id[0])
                {
                    char_count += specifiers[j].f(args);
                    match_found = 1;
                    break;
                }
            }

            if (!match_found)
            {
                _putchar('%');
                _putchar(format[i]);
                char_count += 2;
            }
        }
        i++;
    }

    va_end(args);
    return char_count;
}
