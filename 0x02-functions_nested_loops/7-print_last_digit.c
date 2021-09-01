#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @a: the returning value
 *
 * Return: return int
 */

int print_last_digit(int a)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;

		_putchar (lastDigit + '0');
	}
	return (lastDigit);
}
