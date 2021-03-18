#include "lists.h"
/**
* print_list - prints every element in a singly linked list
* @h: the head of the list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int scout; /*for iteration*/

	for (scout = 0; h != NULL; scout++)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (scout);
}
