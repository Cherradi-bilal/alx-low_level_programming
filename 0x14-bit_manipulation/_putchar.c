#include "main.h"
#include <unistd.h>

/**
 * Writes the character c to stdout - _putchar.
 * @C The character to print is specified.
 * Return: On success 1.
 * If an error occurs, the function returns -1 and sets the errno variable appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

