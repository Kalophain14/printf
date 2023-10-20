#include <stdarg.h>
#include "main.h"

/**
 * struct ph_ext - converts specifiers to l & h
 * @length_modifier: length modifier character, e.g 'l' or 'h'.
 * @width: the field width
 * @precision: the precision format
 * @flags: the format flags (- , 0, etc)
 */
typedef struct {
    char c;
    int flags;
    int width;
    int precision;
    char length_modifier;
    int (*f)(va_list, flags_t *);
} ph_ext;

/**
 * get_print - conv specifier and format specifiers.
 * @s: The character holding the conversion specifier.
 *  @l: va_list for the arguments.
 * @f: flags_t structure.
 * @func_arr: Array of function structures.
 * @width: Field width.
 * @precision: Precision.
 * @length_modifier: Length modifier ('l', 'h', or '\0' for none).
 * Return: A pointer to the matching function, or NULL if no match is found.
 */
int (*get_print(char s, va_list l, flags_t *f, int width, int precision, char length_modifier))(va_list, flags_t *)
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

	for (int i = 0; i < num_funcs; i++)
	{
		if (func_arr[i].c == s && func_arr[i].length_modifier == length_modifier)
		{
			func_arr[i].flags = flags;
			func_arr[i].width = width;
			func_arr[i].precision = precision;
			if (flags & FLAG_LEFT_JUSTIFY)
			{
				func_arr[i].flags |= FLAG_LEFT_JUSTIFY;
			}
			return (func_arr[i].f);
		}
	}
return (NULL);
}
