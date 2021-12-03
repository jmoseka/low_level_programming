#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string of bytes from
*            src into dest.
* @dest: stores string copy.
* @src: source string.
* @n: The maximum number of character to copy from src to dest
*
* Return: A pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	while (dest[n])
	{
		n++;
	}
	strcpy(dest, src);

	return (dest);
}
