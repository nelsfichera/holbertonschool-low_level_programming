#include "lists.h"
/**
* add_dnodeint_end - add node at end of a doubly linked list
* @head: pointer to the head of the list
* @n: data to add in the new node
* Return: pointer to new node on success, null on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *previous = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (head)
	{
		if (!*head)
		{
			*head = newNode;
			return (*head);
		}
		previous = *head;
		while (previous && previous->next)
			previous = previous->next;
		previous->next = newNode;
		newNode->prev = previous;
	}
	return (newNode);
}
