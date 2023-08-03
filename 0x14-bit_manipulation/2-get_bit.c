#include "main.h"
/**
 * get_bit -returns the value of a bit at a given index.
 * @n: Number to search.
 * @index: index of bit.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt_valu;

	if (index > 63)
		return (-1);

	bt_valu = (n >> index) & 1;

	return (bt_valu);
}
