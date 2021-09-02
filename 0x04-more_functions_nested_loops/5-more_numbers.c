#include "main.h"

/**
 * more_numbers - func that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');

			j++;
		}
		_putchar('\n');

		i++;
	}
}
