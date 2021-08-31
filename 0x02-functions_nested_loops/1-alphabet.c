#include "main.h"

/**
 * print_alphabet - function that prints lowercase letter
 *
 */

void print_alphabet(void)
{
	int i = 97;

	while (true)
	{
		_putchar(i);

		if (i == 122)
		{
			return (false);
		}
	}
	_putchar('\n');
}
