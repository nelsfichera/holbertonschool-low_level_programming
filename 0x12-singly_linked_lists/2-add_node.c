#include "lists.h"
/**
* add_node - adds a node to the beginning of list_t
* @head: point to head of target list
* @str: string to add to the new node
* Return: pointer to new head
*/
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	char *string = strdup(str);

	if (string == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	new = malloc(sizeof(list_t));
	if (new  == NULL)
	{
		free(string);
		return (NULL);
	}
	new->len = len;
	new->str = string;
	new->next = *head;

	*head = new;
	return (new);
}
