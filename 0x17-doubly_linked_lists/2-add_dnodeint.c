#include "lists.h"
/**
* add_dnodeint - add a node to doubly linked list
* @head: points to the head of the list
* @n: integer data to add in the new node
* Return: pointer to newly created node on success null on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *current = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	if (head)
	{
		if (*head)
		{
			current = *head;
			current->prev = newNode;
		}
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}
