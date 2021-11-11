#include  "main.h"
/**
 * wildcmp - compares two strings and returns 1 if same
 * @s1: string
 * @s2: string
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s1 == '\0' && *s2 == '*')

		return (wildcmp(s1, (s2 + 1)));

	else if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));

		else if (wildcmp(s1, s2 + 1))
			return (1);

		else
			return (wildcmp(s1 + 1, s2));

	}
	return (0);
}
