#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: beginning of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	free(head);
}
