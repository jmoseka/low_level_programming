#include "lists.h"

/**
 *print_list - prints all the elements in node list_o
 *@h: pointer
 *Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	unsigned int i = 0;

	for (i = 0; c; i++)
	{
		printf("[%u] %s\n", c->len, c->str);
		c = c->next;
	}
	return (i);
}
