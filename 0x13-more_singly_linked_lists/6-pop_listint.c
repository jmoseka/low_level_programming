#include "lists.h"
/**
 *pop_listint - deletes the head node of list
 *@head: pointer
 * Return: head nodes data or value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;

	if (temp == NULL)
	{
		return (0);
	}

	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
