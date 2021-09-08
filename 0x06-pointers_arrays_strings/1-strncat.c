#include "main.h"
#include <string.h>

/**
*_strncat - concatenates two strings
**@dest: pointer to the destination array
**@src: the string to be appended
*@n: maximum number of characters to be appended.
*Return: concantenet string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
