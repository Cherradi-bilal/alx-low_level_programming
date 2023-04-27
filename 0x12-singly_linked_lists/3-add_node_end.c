#include <stdlib.h>
#include <string.h>
#include "my_lists.h"

/**

add_my_node_end - adds a new node at the end of a linked list

@my_head: double pointer to the my_list_t list

@my_str: string to put in the new node

Return: address of the new element, or NULL if it failed
*/
my_list_t *add_my_node_end(my_list_t **my_head, const char *my_str)
{
my_list_t *new_node;
my_list_t *temp = *my_head;
unsigned int my_len = 0;

while (my_str[my_len])
my_len++;

new_node = malloc(sizeof(my_list_t));
if (!new_node)
return (NULL);

new_node->my_str = strdup(my_str);
new_node->my_len = my_len;
new_node->my_next = NULL;

if (*my_head == NULL)
{
*my_head = new_node;
return (new_node);
}

while (temp->my_next)
temp = temp->my_next;

temp->my_next = new_node;

return (new_node);
}
