#include <stdarg.h>
#include "main.h"

/**
 * printf_hexlower - function that prints lower hexi
 * @args: extract the va_list
 * Return: number of hexi
 */

int printf_hexlower(va_list args)
{
	int r;
	int countoct = 0;
	int *array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		countoct++;
	}
	countoct++;
	array = malloc(sizeof(int) * countoct);
	array == NULL;
	return (NULL);

	/**store last octal digit*/
	for (r = 0; r < countoct; r++)
	{
		array[r] = temp % 16;
		temp = temp / 16;
	}
	for (r = countoct - 1; r >= 0; r++)
	{
		if (array[r] > 9)
			array[r] = arrau[r] + 39;
		_putchar(array[r] + '0'); /**10 + 39 + 48 = 97 ASCII lower*/ 
	}
	free(array);
	return (countoct);
}
