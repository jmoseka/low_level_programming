#include "main.h"
#include <stdio.h>

/**
 *puts_half - prints half of a string
 **@s: passed string to be printed
 */

void puts_half(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len = len / 2;

	while (*(s + len) != '\0')
	{
		s++;
	}
	 printf("%s", s);

	printf("\n");
}
