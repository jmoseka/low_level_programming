#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a copy of passed string through malloc
 *
 * @str: passed string pointer parameter
 *
 * Return: a copy of string pointer
 */
char *_strdup(char *str)
{
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}
	ch = strdup(str);

	if (ch == NULL)
	{
		return (NULL);
	}
	return (ch);
}
