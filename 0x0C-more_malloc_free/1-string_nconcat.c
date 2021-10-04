#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: n bytes of the string pointer
 * @n: bytes
 *
 * Return: a mallocked pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++);
	for (len2 = 0; s2[len2] != '\0'; len2++);

	if (n >= len2)
	n = len2;

	ch = malloc((len + n + 1) * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		ch[i] = s1[i];
	}
	for (j = 0; s2[j] && j < n; j++, i++)
	{
		ch[i] = s2[j];
	}
	ch[i] = '\0';
	return (ch);
}
