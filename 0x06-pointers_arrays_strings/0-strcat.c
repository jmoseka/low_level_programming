#include "main.h"
#include <string.h>

/**
*_strcat - concatenates two strings
**@dest: pointer to char
**@src: pointer to char
*Return: concantinated pointer string
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
