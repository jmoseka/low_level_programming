#include "main.h"

/**
*_memset - Fills n bytes of memory area pointed to with constant byte c
*@s:A pointer to the memory area to be filled.
*@b:The character to fill the memory area with.
*@n:The number of bytes to be filled.
*
*Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, j = 0, a = n;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for (i = 0; i < b; i++)
	{
		s[i] = a;
	}
	return (s);
}
