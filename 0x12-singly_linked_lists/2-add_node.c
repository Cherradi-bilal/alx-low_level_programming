#include <stdlib.h>
#include <string.h>
#include "my_lists.h"

/**

add_my_node - adds a new node at the beginning of a linked list

@my_head: double pointer to the my_list_t list

@my_str: new string to add in the node

Return: the address of the new element, or NULL if it fails
*/
my_list_t *add_my_node(my_list_t **my_head, const char *my_str)
{
my_list_t *new_node;
unsigned int my_len = 0;

while (my_str[my_len])
my_len++;

new_node = malloc(sizeof(my_list_t));
if (!new_node)
return (NULL);

new_node->my_str = strdup(my_str);
new_node->my_len = my_len;
new_node->my_next = (*my_head);
(*my_head) = new_node;

return (*my_head);
}
