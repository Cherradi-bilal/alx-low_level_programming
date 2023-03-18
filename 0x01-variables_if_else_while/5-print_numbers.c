#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: loop to iterate over the numbers 0 through 9
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        putchar(i + '0');

    putchar('\n');
    return 0;
}

