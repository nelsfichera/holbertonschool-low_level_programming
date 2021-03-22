#include "lists.h"
/**
* free_listint2 - free the list and set head to null
* @head: pointer to head of list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
