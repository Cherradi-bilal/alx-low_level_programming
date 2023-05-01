#include "lists.h"
/**
 * The function listint_len counts the number of nodes in a linked list and returns the total count as its output.
 * @h:To iterate through a linked list of type listint_t, you can use a loop and a pointer to traverse from one node to the next.
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}




