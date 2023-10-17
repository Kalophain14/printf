#include <stdarg.h>
#include "main.h"
/**
 * print_hexip - function that prints hexi upper A
 * @num: unisgned long integer to printed
 * Return: number of hexi
 */

int print_hexip(unsigned long int num)
{
	long int r;
	long int countoct = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		countoct++;
	}
	countoct++;
	array = malloc(sizeof(long int) * countoct);
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
			array[r] = arrau[r] + 7;
		_putchar(array[r] + '0'); /**10 + 7 + 48 = 65 ASCII Upper*/
	}
	free(array);
	return (countoct);
}
