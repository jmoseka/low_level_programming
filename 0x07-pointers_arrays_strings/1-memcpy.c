#include "main.h"

/**
*_memcpy - Fills n bytes of memory area pointed to with constant byte c
*@dest: a pointer that copies memory area
*@src:The pointer to copy from
*@n:The number of bytes to copy
*
*Return: A pointer to the copied memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
