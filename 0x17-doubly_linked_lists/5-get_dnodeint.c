#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: beginning of the list
 * @index: is the index of the node.
 * Return: the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);

}
