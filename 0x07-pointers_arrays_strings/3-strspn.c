#include "main.h"
#include <string.h>

/**
*_strspn - gets the length of a prefix substring
*@s: string to be checked
*@accept: string to compare to s
*
*Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
