a#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Pointer to the destination memory location
 * @src: Pointer to the source memory location
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory location
 */
char *_memcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

