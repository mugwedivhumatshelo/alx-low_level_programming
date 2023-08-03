#include "main.h"
/**
 * print_binary -prints the binary representation of a number.
 * @n: number to be printed in the binary.
 */

void print_binary(unsigned long int n)
{
	int v, value = 0;
	unsigned long int b;

	for (v = 63; v >= 0; v--)
	{
		b = n >> v;

		if (b & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
