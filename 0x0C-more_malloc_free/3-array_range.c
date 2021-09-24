#include <stdlib.h>
#include <string.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: int value
 * @max: int value
 *
 * Return: a mallocked pointer  to an integer
 */
int *array_range(int min, int max)
{
	int *range;
	int len = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	len = min + max;

	range = malloc((len) * sizeof(int));

	if (range == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		range[i] = min++;
	}
	return (range);
}
