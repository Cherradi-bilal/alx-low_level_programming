#include <stdio.h>
#include "my_lists.h"

/**

print_my_list - prints all the elements of a linked list

@my_head: pointer to the my_list_t list to print

Return: the number of nodes printed
*/
size_t print_my_list(const my_list_t *my_head)
{
size_t my_size = 0;

while (my_head)
{
if (!my_head->my_str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", my_head->my_len, my_head->my_str);
my_head = my_head->my_next;
my_size++;
}

return (my_size);
}
