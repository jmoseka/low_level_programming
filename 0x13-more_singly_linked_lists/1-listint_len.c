#include "lists.h"
/**
 *listint_len - number of elements in a linked list_t list.
 *@h: pointer
 *Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
