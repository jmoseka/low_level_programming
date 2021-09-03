#include "main.h"

/**
* print_triangle - Prints a triangle
* @size: size of triangle
*
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = rows; i >= 1; --)
		{
			for (j = i; j >= 1; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
