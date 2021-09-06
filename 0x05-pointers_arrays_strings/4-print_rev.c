#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints a string in reverse
 **@s: pointer to char
 */

void print_rev(char *s)
{
	int i, length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		if (i == '\0')
		{
		}
		else
		{
			printf("%c", *(s + i));
		}
	}
	printf("\n");
}
