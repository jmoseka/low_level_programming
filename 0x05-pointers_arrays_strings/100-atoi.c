#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter name
 *
 * Return: value of integer
 */

int _atoi(char *s)
{
	int i, j, k, len, m, tmp;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	m = 0;
	tmp = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			tmp = s[i] - '0';
			if (j % 2)
				tmp = -tmp;
			k = k * 10 + tmp;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}
