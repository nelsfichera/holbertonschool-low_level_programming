#include "lists.h"
/**
* sum_listint - sum all the data in the linked list
* @head: pointer to the beginning of list
* Return: sum of all data
*/
int sum_listint(listint_t *head)
{
	listint_t *scout = head;
	int sum = 0;

	if (scout == NULL)
		return (0);
	while (scout)
	{
		sum += scout->n;
		scout = scout->n;
	}
	return (sum);
}
