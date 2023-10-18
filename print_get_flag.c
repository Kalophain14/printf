#include "main.h"

/**
 * get_flag - Set flags if _printf encounters a flag specifier in the format string.
 * @s: The character that holds the flag specifier.
 * @f: Pointer to the flags_t struct where the flags are turned on.
 * Return: 1 if a flag has been turned on, 0 otherwise.
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
