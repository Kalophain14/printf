#include <stdarg.h>
#include "main.h"

/**
 * print_rot13string - Print a string in ROT13.
 * @types: List of arguments
 * Return: Number of characters printed
 */

int print_rot13string(va_list types)
{
    char *str = va_arg(types, char *);
    int count = 0;

    if (str == NULL)
        str = "(AHYY)";

    for (int i = 0; str[i]; i++)
    {
        char x = str[i];
        int j;
        const char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        const char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (j = 0; in[j]; j++)
        {
            if (in[j] == str[i])
            {
                x = out[j];
                break;
            }
        }

        _putchar(x);
        count++;
    }

    return count;
}
