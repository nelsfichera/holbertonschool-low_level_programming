#include "lists.h"
/**
* dlistint_len - gets the length of a doubly linked list
* @h: pointer to the head of the list
* Return: number of nodes in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int node = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			node++;
			current = current->next;
		}
	}
	return (node);
}
