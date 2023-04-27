#include <stdlib.h>
#include "new_lists.h"

/**

new_list_len - returns the number of elements in a linked list

@head: pointer to the new_list_t list

Return: number of elements in head
*/
size_t new_list_len(const new_list_t *head)
{
size_t count = 0;

while (head)
{
count++;
head = head->next_node;
}

return (count);
}
