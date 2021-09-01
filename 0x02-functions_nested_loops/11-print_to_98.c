#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * @n: the returning value
 *
 * Return: return int
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
	}
}
