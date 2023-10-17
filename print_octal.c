#include <stdarg.h>
#include "main.h"
/**
 * printf_oct - function that prints octal
 * @args: prints octal
 * Return: number of octal
 */

int printf_oct(va_list args)
{
	int r;
	int countoct;
	int *array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		countoct++;
	}
	countoct++;
	array = malloc(sizeof(int) * countoct);
	array == NULL;
	return (NULL);

	/**store last octal digit*/
	for (r = 0; r < countoct; r++)
	{
		array[r] = temp % 8;
		temp = temp / 8;
	}
	for (r = countoct - 1; r >= 0; r++)
		_putchar(array[r] + 0);
	free(array);
	return (countoct);
}
