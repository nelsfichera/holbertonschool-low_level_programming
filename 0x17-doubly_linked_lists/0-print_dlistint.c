#include "lists.h"
/**
* print_dlistint - print a doubly linked list
* @h: pointed to head of list
* Return: num printed nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int node = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
			node++;
		}
	}
	return (node);
}
