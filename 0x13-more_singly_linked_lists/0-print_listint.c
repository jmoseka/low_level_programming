#include "lists.h"
/**
 *print_listint - number of elements in a linked list_t list.
 *@h: pointer
 *Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
