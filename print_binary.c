#include <stdarg.h>
#include "main.h"

/**
 * print_bi - prints binary
 * @binary: binary arguement
 * Return: integers
 */

int print_bi(va_list binary)
{
	int encount; /**non-zero encounterd*/
	int count = 0; /**num bits printed*/
	int r;
	int bitmask = 1;
	int storecurbit;
	unsigned int numbinary = va_arg(binary, unsigned int);
	unsigned int tempbit; /**store temp bit wise*/

	/**unsigned int has 31 bit*/
	for (r = 0; r < 32; r++)
	{
		tempbit = ((bitmask << (32 - r)) & numbinary);

		if (tempbit >> (31 - r))
			encounter = 1
		if (encounter)
		{
			storecurbit = tempbit >> (31 - r);
			_putchar(storecurbit + 48); /**ASCII 48 = 0*/
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
return (count);
}
