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
	int len = strlen(str) + 1;

	ch = malloc((len + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	ch = (char*) memcpy(ch, str, len);

	return (ch);
}
