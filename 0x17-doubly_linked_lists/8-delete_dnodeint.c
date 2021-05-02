#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at given position
* @head: pointer to head of list
* @index: position of node to remove
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *remove = NULL;

	if (head && *head)
	{
		remove = *head;
		if (index == 0)
		{
			*head = remove->next;
			if (remove->next)
				remove->next->prev = NULL;
		}
		else
		{
			for (; index > 0; index--)
			{
				remove = remove->next;
				if (!remove)
					return (-1);
			}
			if (remove->prev)
				remove->prev->next = remove->next;
			if (remove->next)
				remove->next->prev = remove->prev;
		}
		if (remove)
			free(remove);
		return (1);
	}
	return (-1);
}
