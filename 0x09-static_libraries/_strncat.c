#include "main.h"

/**
*_strncat - concatenates two strings
**@dest: pointer to the destination array
**@src: the string to be appended
*@n: maximum number of characters to be appended.
*Return: concantenet string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}

	return (dest);
}
