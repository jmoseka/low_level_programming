#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: size of triangle
*
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = rows; i >= 1; --)
		{
<<<<<<< HEAD
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}

			for (k = 1; k <= j; k++)
=======
			for (j = i; j >= 1; j--)
>>>>>>> 05110348497bf0a5c996ed9390d9d3c4853541b9
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
