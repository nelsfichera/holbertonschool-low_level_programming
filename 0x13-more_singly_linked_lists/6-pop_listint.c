#include "lists.h"
/**
* pop_listint - delete head node in the linked list
* @head: pointer to head of linked list
* Return: data from deleted head node
*/
int pop_listint(listint_t **head)
{
	listint_t *new = *head, *temp;
	int data; /*the data from the node*/

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = new->next;
	free(temp);
	return (data);
}
