#include "main.h"
#include <string.h>

/**
*_strchr- checks for a character in a string
*@s:A pointer to the string checking for a character
*@c: the checked character
*
*Return: A pointer a value or null
*/

char *_strchr(char *s, char c)
{
	char *p = strchr(s, c);

	s = p;
	return (s);
}
