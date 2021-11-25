#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a list.
 * @head: beginning of the list
 *
 * Return: sum all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
