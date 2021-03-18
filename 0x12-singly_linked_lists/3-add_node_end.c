#include "lists.h"
/**
* add_node_end - add a new node at the end of list_t
* @head: pointer to head of list
* @str: string to add
* Return: new noded
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;
	char *string = strdup(str);
	int len = 0;

	if (string == NULL)
		return (NULL);
	if (new == NULL)
	{
		free(string);
		return (NULL);
	}
	while (*(str + len))
		len++;
	new->str = string;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
