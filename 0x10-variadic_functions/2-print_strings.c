#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print strings
 *@separator: comma to be printed between numbers
 *@n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *s;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str_list, char *);

		if (s == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
		printf("%s", s);
		}

		if (separator && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str_list);
}
