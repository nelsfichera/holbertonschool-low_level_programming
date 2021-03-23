#include "lists.h"
/**
* sum_listint - sum all the data in the linked list
* @head: pointer to the beginning of list
* Return: sum of all data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
		sum += head->n;
		head = head->n;
		}
	}
	return (sum);
}
