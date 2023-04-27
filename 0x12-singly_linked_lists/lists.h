#ifndef NEW_LISTS_H
#define NEW_LISTS_H

/**

struct new_list_s - singly linked list
@string: string - (malloc'ed string)
@length: length of the string
@next_node: points to the next node
Description: singly linked list node structure
for Holberton project
*/
typedef struct new_list_s
{
char *string;
unsigned int length;
struct new_list_s *next_node;
} new_list_t;
size_t print_new_list(const new_list_t *head);
size_t new_list_len(const new_list_t *head);
new_list_t *add_new_node(new_list_t **head, const char *string);
new_list_t *add_new_node_end(new_list_t **head, const char *string);
void free_new_list(new_list_t *head);

#endif
