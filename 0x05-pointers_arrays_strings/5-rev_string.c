#include "main.h"

/**
 *rev_string - prints a string in reverse
 **@s: pointer to char
 */

void rev_string(char *s)
{
	char *rev;
	int i = 0;

	rev = s;

	while (rev[i])
	{
		i++;
	}

	while (i--)
	{
		s = rev[i];
	}
}
