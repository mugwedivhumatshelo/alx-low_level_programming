#include "main.h"

/**
 * binary_to_uint -Converts binary number into unsigned int.
 * @b:String which contains the binary number.
 *
 * Return:The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int vh;
	unsigned int dec_valu = 0;

	if (!b)
		return (0);

	for (vh = 0; b[vh]; vh++)
	{
		if (b[vh] < '0' || b[vh] > '1')
			return (0);
		dec_valu = 2 * dec_valu + (b[vh] - '0');
	}

	return (dec_valu);
}
