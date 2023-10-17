#include "main.h"
/**
 *_strlen - a function that returns the length of a string.
 *@str: string
 *Return: length of the string
 */

int _strlen(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
		;
return (r);
}

/**
 *_strlenc - a function that returns the constant length of a string.
 *@str: string
 *Return: length of the string
 */

int _strlenc(const char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
		;
return (r);
}
