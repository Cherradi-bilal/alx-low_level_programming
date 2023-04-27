#include <stdlib.h>
#include "my_lists.h"

/**

my_list_len - returns the number of elements in a linked list

@my_head: pointer to the my_list_t list

Return: number of elements in my_head
*/
size_t my_list_len(const my_list_t *my_head)
{
size_t my_size = 0;

while (my_head)
{
my_size++;
my_head = my_head->my_next;
}

return (my_size);
}
