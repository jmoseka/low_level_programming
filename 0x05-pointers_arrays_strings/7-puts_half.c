#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 **@s: pointer to char
 */

void puts_half(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	printf("%s", s + len / 2);

	printf("\n");
}
