#include "main.h"

/**
 * _strlen - return length of string
 * *s: pointer to char
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	
	return length;
}