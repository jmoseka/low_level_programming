#include "main.h"
#include <string.h>

/**
*_strpbrk - checks for a character in a string
*@s: A pointer to the string being checked for a character
*@accept: the checking character
*
*Return: A pointer a value or null if there is a match or not
*/
char *_strpbrk(char *s, char *accept)
{
	char *ch = s;

	ch = strpbrk(s, accept);
	s = ch;

	return (s);
}
