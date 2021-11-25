#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: list of elements
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
