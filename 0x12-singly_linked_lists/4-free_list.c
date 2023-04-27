#include <stdlib.h>
#include "new_lists.h"

/**

free_new_list - frees a linked list

@head: new_list_t list to be freed
*/
void free_new_list(new_list_t *head)
{
new_list_t *temp;

while (head)
{
temp = head->next_node;
free(head->string);
free(head);
head = temp;
}
}
