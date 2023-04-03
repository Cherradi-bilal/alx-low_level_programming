#include "main.h"
/**
The function called "memcpy" is used for copying a memory area. It takes in three arguments:

"dest" is the memory location where the copied data will be stored
"src" is the memory location from where the data will be copied
"n" is the number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int c = n;

	for (; c < b; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}

