#include "main.h"
/**
 * binary_to_uint -Converts a binary number to an unsigned int.
 * @b: String containing a binary number.
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int valu = 0;

	if (!b)
		return (0);

	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		valu = 2 * valu + (b[v] - '0');
	}

	return (valu);
}
