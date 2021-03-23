#include "lists.h"
/**
* listint_len - return the number of nodes in listint
* @h: pointer to head of linked list listint
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int x; /*iterates over list, returns number of nodes*/

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
