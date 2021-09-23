#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a concatenated string using malloc
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3;
	int i, j;
	char *ch;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}

	len3 = len1 + len2;

	ch = malloc(len3 + 1 * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		ch[0] = '\0';
		return (ch);
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ch[i] = s2[j];
		i++;
	}

	return (ch);
}
