#include <stdarg.h>
#include "main.h"

/**
 * append_hexa-code - appends hexa representation to oputput
 * @character: char to be convverted and appended
 * Return: number of char appended
 */

int append_hexa_code(char character)
{
	char hex[5];
	int r;

	snprintf(hex, sizeof(hex), "\\x%02x", (unsigned char)character);
	for (r = 0; hex[r] != '\0'; r++) 
	{
		_putchar(hex[r]);
	}
	return 4;
}
