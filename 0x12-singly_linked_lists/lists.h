#ifndef MY_LISTS_H
#define MY_LISTS_H

/**

struct my_list_s - singly linked list
@my_str: string - (malloc'ed string)
@my_len: length of the string
@my_next: points to the next node
Description: singly linked list node structure
for my project
*/
typedef struct my_list_s
{
char *my_str;
unsigned int my_len;
struct my_list_s *my_next;
} my_list_t;
size_t print_my_list(const my_list_t *my_head);
size_t my_list_len(const my_list_t *my_head);
my_list_t *add_my_node(my_list_t **my_head, const char *my_str);
my_list_t *add_my_node_end(my_list_t **my_head, const char *my_str);
void free_my_list(my_list_t *my_head);

#endif
