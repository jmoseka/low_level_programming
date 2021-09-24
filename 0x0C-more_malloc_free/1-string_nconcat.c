#include <stdlib.h>
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
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = sizeof(s1);

	ch = malloc((len + n + 1) * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		ch[i] = s1[i];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		ch[i] = s2[j];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
