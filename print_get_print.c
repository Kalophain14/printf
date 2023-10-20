#include <stdarg.h>
#include "main.h"

/**
 * get_print - Printing function based on the conv specifier and format specifiers.
 * @s: The character holding the conversion specifier.
 * @flags: The format flags ('-', '0', etc.).
 * @width: The field width.
 * @precision: The precision for the format.
 * @length_modifier: The length modifier ('l', 'h', or '\0' for none).
 * Return: A pointer to the matching function, or NULL if no match is found.
 */

int (*get_print(char s, char flags, int width, int precision, char length_modifier))(va_list l, flags_t *f)
{
    ph_ext func_arr[] = {
        {'i', 0, 0, 0, '\0', print_int},
        {'s', 0, 0, 0, '\0', print_string},
        {'c', 0, 0, 0, '\0', print_char},
        {'d', 0, 0, 0, '\0', print_int},
        {'u', 0, 0, 0, '\0', print_unsigned},
        {'x', 0, 0, 0, '\0', print_hex},
        {'X', 0, 0, 0, '\0', print_hex_big},
        {'b', 0, 0, 0, '\0', print_binary},
        {'o', 0, 0, 0, '\0', print_octal},
        {'R', 0, 0, 0, '\0', print_rot13},
        {'r', 0, 0, 0, '\0', print_rev},
        {'S', 0, 0, 0, '\0', print_bigS},
        {'p', 0, 0, 0, '\0', print_address},
        {'%', 0, 0, 0, '\0', print_percent}
    };

    int num_funcs = 13;
    register int i;

    for (int i = 0; i < num_funcs; i++) {
        if (func_arr[i].c == s && func_arr[i].length_modifier == length_modifier) {
            func_arr[i].flags = flags;
            func_arr[i].width = width;
            func_arr[i].precision = precision;
            if (flags & FLAG_LEFT_JUSTIFY) {
                func_arr[i].flags |= FLAG_LEFT_JUSTIFY;
            }
            return func_arr[i].f;
        }
    }

    return NULL;
}
