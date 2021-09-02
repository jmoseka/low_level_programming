#include "main.h"

/**
 * print_most_numbers - prints number from 0 - 9 except 2 -4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
