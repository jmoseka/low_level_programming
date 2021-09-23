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
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i;

	s1 = malloc(len2 * sizeof(char));

	for (i = 0; i <= len2; i++)
	{
		s1[len1] = s1[i];
		len1++;
	}
	return (s1);
}
