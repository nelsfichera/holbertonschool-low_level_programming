#include "lists.h"
/**
* get_dnodeint_at_index - returns node at index in a doubly linked list
* @head: pointer to head of linked list
* @index: index of node to get
* Return: node at index on success, NULL on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *targetNode = NULL;
	unsigned int x = 0;

	if (head)
	{
		targetNode = head;
		for (x = 0; x < index; x++)
		{
			if (!targetNode)
				return (NULL);
			targetNode = targetNode->next;
		}
	}
	return (targetNode);
}
