#include "lists.h"
/**
 *sum_listint - print elements and return no of elements
 *@head: pointer
 *Return: sum of elements in list or null if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
