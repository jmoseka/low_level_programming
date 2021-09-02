#include "main.h"

/**
 * print_square - func that prints 10 times the numbers, from 0 to 14
 *
 * @size:  integer return type
 *
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;

			while (j <= size)
			{
				_putchar('#');

				j++;
			}
			_putchar('\n');

			i++;
		}
	}
}
