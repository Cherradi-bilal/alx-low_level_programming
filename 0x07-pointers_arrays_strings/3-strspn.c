#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: The number of characters in the initial segment of s which consist
 *         only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		int r;

		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
		}

		if (!accept[r])
		{
			break;
		}

		s++;
	}

	return n;
}

