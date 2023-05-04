#include "main.h"
/*
 * Checks whether a machine is little or big endian - get_endianness.
 * 0 for big endian.
 * 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

