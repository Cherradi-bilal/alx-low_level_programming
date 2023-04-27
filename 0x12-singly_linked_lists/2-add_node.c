#include <stdlib.h>
#include <string.h>
#include "new_lists.h"

/**

add_new_node - adds a new node at the beginning of a linked list

@head: double pointer to the new_list_t list

@string: new string to add in the node

Return: the address of the new element, or NULL if it fails
*/
new_list_t *add_new_node(new_list_t **head, const char *string)
{
new_list_t *new_node;
unsigned int length = 0;

while (string[length])
length++;

new_node = malloc(sizeof(new_list_t));
if (!new_node)
return (NULL);

new_node->string = strdup(string);
new_node->length = length;
new_node->next_node = (*head);
(*head) = new_node;

return (*head);
}
