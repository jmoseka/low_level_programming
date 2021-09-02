#include "main.h"
#include <string.h>
/**
 * main - prints the Fizz-Buzz test
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 1, length, j;
	char fizz[] = "Fizz", buzz[] = "Buzz", fizzBuzz[] = "FizzBuzz";

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			length = strlen(fizz);
			for (j = 0; j < length; j++)
			{
				_putchar(fizz[j]);
			}
		}
		else if (i % 5 == 0)
		{
			length = strlen(buzz);
			for (j = 0; j < length; j++)
			{
				_putchar(buzz[j]);
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			{
			length = strlen(fizzBuzz);
			for (j = 0; j < length; j++)
				_putchar(fizzBuzz[j]);
			}
		}
		else
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar(' ');
		i++;
	}
	return (0);
}
