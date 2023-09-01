#include "main.h"
/**
 * get_bit -Return the value of the bit in an index in decimal number.
 * @n:Number to be searched.
 * @index: index of the bit.
 *
 * Return:value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valu;

	if (index > 63)
		return (-1);

	bit_valu = (n >> index) & 1;

	return (bit_valu);
}
