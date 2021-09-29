#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - print an array
 *@array : integer array
 *@size: size of array
 *@action: pointer to function with int?
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
