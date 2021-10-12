#include "lists.h"
/**
 *add_nodeint - insert node in the beginning
 *@head: head pointer
 *@n: integer value
 *Return: a node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(n));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
