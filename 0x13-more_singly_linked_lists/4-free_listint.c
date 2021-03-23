#include "lists.h"
/**
* free_listint - free each node
* @head: pointer to beginning of list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	free(head);
}
