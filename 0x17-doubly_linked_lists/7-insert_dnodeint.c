#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: beginning of the list
 * @idx: index of the list where the new node should be added.
 * @n: the place of the new node
 * Return: NULL and do not add the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int position = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (position < idx - 1)
	{
		tmp = tmp->next;
		position++;
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
