#include <stdlib.h>
#include <string.h>
#include "new_lists.h"

/**

add_new_node_end - adds a new node at the end of a linked list

@head: double pointer to the new_list_t list

@string: string to put in the new node

Return: address of the new element, or NULL if it failed
*/
new_list_t *add_new_node_end(new_list_t **head, const char *string)
{
new_list_t *new_node;
new_list_t *temp = *head;
unsigned int length = 0;

while (string[length])
length++;

new_node = malloc(sizeof(new_list_t));
if (!new_node)
return (NULL);

new_node->string = strdup(string);
new_node->length = length;
new_node->next_node = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next_node)
temp = temp->next_node;

temp->next_node = new_node;

return (new_node);
}
