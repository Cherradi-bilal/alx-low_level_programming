#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Pointer to the starting address of the memory to be filled
 * @b: The desired value to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the starting address of the filled memory
 */
char *_memset(char *s, int b, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

