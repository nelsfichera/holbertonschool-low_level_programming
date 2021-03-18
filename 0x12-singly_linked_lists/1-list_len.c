#include "lists.h"
/**
* list_len - returns the number of elements in the linked list_t.
* @h: pointer to the list
* Return: size of list
*/
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
