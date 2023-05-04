#include "main.h"

/**
 * Sets a bit at a specified index to 1 - set_bit.
 * A pointer to the number to be modified is specified as @n.
 * The index of the bit to be set to 1 is specified as @index.
 *  Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

