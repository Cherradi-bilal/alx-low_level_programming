#include "main.h"

/**

Set the value of a pointer to a char.
@param ptr - Pointer to pointer to be set.
@param str - Pointer to the char string.
*/
void set_string(char **ptr, char *str)
{
*ptr = str;
}
