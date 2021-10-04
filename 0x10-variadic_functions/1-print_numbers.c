#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - print numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int numbers = 0;

	va_start (ap, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(ap, int);

		if (n > 1 && i == n - 1)
		{
			printf("%d", numbers);
		}
		else
		{
			printf("%d", numbers);
			printf("%s ", separator);
		}
	}
}
