#include "main.h"
/**
 * print_binary -Print binary equivalent of the decimal number.
 *
 * @n:Number to be printed on a binary.
 */
void print_binary(unsigned long int n)
{
	int vh, count = 0;
	unsigned long int cuurent;

	for (vh = 63; vh >= 0; vh--)
	{
		cuurent = n >> vh;

		if (cuurent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
