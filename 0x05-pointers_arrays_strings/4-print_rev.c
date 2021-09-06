#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string
 **@s: pointer to char
 */

void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
