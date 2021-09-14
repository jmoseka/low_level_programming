#include "main.h"
#include <stddef.h>
/**
*_strchr- checks for a character in a string
*@s:A pointer to the string checking for a character
*@c: the checked character
*
*Return: A pointer a value or null
*/

char *makeNull(char *p)
{
	p = NULL;
	return (p);
}

char *_strchr(char *s, char c)
{
	int i = 0;

	do
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	while(i++);

	return (NULL);
}

