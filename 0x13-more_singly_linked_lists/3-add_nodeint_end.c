#include "lists.h"
/**
* add_nodeint_end - add a node to the end of a list
* @head: pointer to head of list
* @n: data
* Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *prev = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (prev->next != NULL)
		prev = prev->next;
	prev->next = new;

	return (new);
}
