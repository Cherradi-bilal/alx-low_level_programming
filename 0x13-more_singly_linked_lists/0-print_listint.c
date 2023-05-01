#include "lists.h"
/**
 * The purpose of the function print_listint is to display all the elements in a linked list
 * @h:a linked list of listint_t type that needs to be printed
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

