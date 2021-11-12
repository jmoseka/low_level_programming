#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range -  a function that creates an array of integers.
 * @min: int value
 * @max: int value
 *
 * Return: a mallocked pointer  to an integer
 */
int *array_range(int min, int max)
{
	int  *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0;  i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
