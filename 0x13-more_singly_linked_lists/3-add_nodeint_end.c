#include "lists.h"
/**
 *add_nodeint_end - insert node in the end of list
 *@head: head pointer
 *
 *@n: integer value
 *Return: a node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
	*head = temp;
	return (temp);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}
