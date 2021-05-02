#include "lists.h"
/**
* free_dlistint - frees the memory of a doubly linked list
* @head: pointer to head of list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp && temp->next)
		{
			temp = temp->next;
			free(temp->prev);
		}
		free(temp);
	}
}
