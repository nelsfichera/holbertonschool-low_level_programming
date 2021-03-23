#include "lists.h"
/**
* print_listint - prints all elements of a singly linked list
* @h: pointer to head of list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int x; /*iterator, returns number of nodes*/

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
