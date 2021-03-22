#include "lists.h"
/**
* delete_nodeint_at_index - delete node at given position
* @head: pointer to beginning of list
* @index: index of position to delete node
* Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *new = *head, *scout = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	while (scout)
	{
		if (index == 0)
		{
			new = *head;
			*head = new->next;
			free(new);
			return (1);
		}
		if (x == index - 1)
			old = scout;
		if (x == index)
		{
			old->next = scout->next;
			free(scout);
			return (1);
		}
		scout = scout->next;
		x++;
	}
	return (-1);
}
