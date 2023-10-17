#include <stdarg.h>
#include "main.h"
/**
 * print_hexis - function that prints hexi upper A
 * @num: unsigned int
 * Return: number of hexi
 */

int print_hexis(unsigned int num)
{
	int r;
	int countoct = 0;
	int *array;
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
			array[r] = arrau[r] + 7;
		_putchar(array[r] + '0'); /**10 + 7 + 48 = 65 ASCII Upper*/
	}
	free(array);
	return (countoct);
}
