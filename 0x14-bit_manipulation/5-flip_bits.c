#include "main.h"
/**
 * flip_bits -returns the number of bits you would need,
 * to flip to get from one number to another.
 * @n: 1st number.
 * @m: 2nd number.
 * Return: Number of bits changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, valur = 0;
	unsigned long int b;
	unsigned long int num = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		b = num >> v;
		if (b & 1)
			valur++;
	}

	return (valur);
}
