#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: size of the pointer
 * Return: allocates memory using malloc
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
