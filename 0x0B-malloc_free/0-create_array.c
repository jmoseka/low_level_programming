#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array
 *
 * @size: size of the array
 * @c: element of the array
 *
 * Return: mallocked array char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
