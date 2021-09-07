#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string
 **@s: pointer to char
 */

void rev_string(char *s)
{
	int length = strlen(s),i;
	length = length - 1;

	for (i = length; i>= 0; i--)
	{
		*s = s[i];
	}
}
