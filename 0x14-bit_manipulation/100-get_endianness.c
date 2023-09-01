#include "main.h"
/**
 * get_endianness -Check if the machine is little or big endian.
 * Return: 0 for big, 1 for little.
 */

int get_endianness(void)
{
	unsigned int vh = 1;
	char *c = (char *) &vh;

	return (*c);
}
