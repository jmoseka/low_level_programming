#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: elements of an array
 * @size: of size bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = calloc(nmemb, size);

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
