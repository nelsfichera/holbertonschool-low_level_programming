#include "lists.h"
/**
* sum_dlistint - gets the sum of all data from a doubly linked list
* @head: pointer to head of list
* Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int data = 0;

	if (head)
	{
		node = head;
		while (node && node->next)
		{
			data += node->n;
			node = node->next;
		}
		data += node->n;
	}
	return (data);
}
