#include "main.h"

/**
 * print_numbers - prints number from 0 - 9
 *
 */

void print_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
