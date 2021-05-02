#include "lists.h"
/**
* insert_dnodeint_at_index - inserts node at a given index
* @h: pointer to head of list
* @idx: index of new node
* @n: data for noew node
* Return: pointer to new node on success, NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	if (h)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		temp = *h;
		if (idx > 0)
		{
			for (; idx > 1 && temp; idx--)
				temp = temp->next;
			if (!temp)
				return (NULL);
			new->next = temp->next;
			new->prev = temp;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
		}
		else
		{
			new->next = *h;
			if (temp)
				temp->prev = new;
			*h = new;
		}
	}
	return (new);
}
