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
	listint_t *new, *scout = *head;
	unsigned int x = 0;

	if (*head == NULL && index > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (scout)
	{
		if (x == idx - 1)
		{
			new->n = n;
			new->next = scout->next;
			scout->next = new;
			return (new);
		}
		scout = scout->next;
		x++;
	}
	free(new);
	return (NULL);
}
