#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int, int, int);
void print_remaining_days(int, int, int);
int convert_day(int, int);

#endif /* MAIN_H */

vi 0-main.c

#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;

i = 0;
positive_or_negative(i);

return (0);
}

