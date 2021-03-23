#include "lists.h"
/**
* insert_nodeint_at_index - insert node at given position
* @head: pointer to beginning of list
* @idx: index position to add node
* @n: data for new node
* Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *scout;
	unsigned int x = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	scout = *head;
	while (x < (idx - 1))
	{
		scout = scout->next;
		x++;
		if (scout == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = scout->next;
	scout->next = new;
	return (new);
}
