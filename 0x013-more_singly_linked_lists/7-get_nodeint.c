#include "lists.h"
/**
* get_nodeint_at_index - return the nth node of a linked list
* @head: pointer to beginning of linked list
* @index: index of node to retrieve
* Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *scout = head;

	if (scout == NULL)
		return (NULL);
	while (scout)
	{
		if (x == index)
			return (scout);
		scout = scout->next;
		x++;
	}
	return (0);
}
