#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: Pointer to the first occurrence of the character in the string, 
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	return NULL;
}

