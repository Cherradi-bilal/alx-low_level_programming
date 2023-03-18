#include <unistd.h>

/**
 * main - Entry point. Prints all possible different combinations of three digits.
 *
 * Return: Always 0.
 */
void print_combination(int a, int b, int c)
{
    putchar(a + '0');
    putchar(b + '0');
    putchar(c + '0');
    if (a != 7 || b != 8 || c != 9)
    {
        putchar(',');
        putchar(' ');
    }
}

int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                print_combination(i, j, k);
            }
        }
    }
    putchar('\n');
    return (0);
}

