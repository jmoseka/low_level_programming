#include "main.h"

/**
 * print_alphabet_x10 - function that prints lowercase letter 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0, j = 97;

	while (i < 10)
	{
		while (j <= 122)
		{
			_putchar(i);

			j++;
		}

		i++;
	}
}
