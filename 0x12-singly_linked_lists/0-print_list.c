#include <stdio.h>
#include "new_lists.h"

/**

print_new_list - prints all the elements of a linked list

@head: pointer to the new_list_t list to print

Return: the number of nodes printed
*/
size_t print_new_list(const new_list_t *head)
{
size_t count = 0;

while (head)
{
if (!head->string)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", head->length, head->string);
head = head->next_node;
count++;
}

return (count);
}
