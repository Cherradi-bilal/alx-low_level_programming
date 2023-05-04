#include "main.h"

/**
 * Returns the value of a bit at a given index in a decimal number - get_bit.
 * The number to search is specified as @n.
 * The index of the bit is specified as @index.
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

