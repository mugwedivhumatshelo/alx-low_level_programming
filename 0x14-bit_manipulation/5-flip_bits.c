#include "main.h"
/**
 * flip_bits -Count the number of a  bits to change.
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return:Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int vh, count = 0;
	unsigned long int cuurent;
	unsigned long int excusive = n ^ m;

	for (vh = 63; vh >= 0; vh--)
	{
		cuurent = excusive >> vh;
		if (cuurent & 1)
			count++;
	}

	return (count);
}
