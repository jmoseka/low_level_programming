#include "main.h"

/**
 * _islower - function that returns true for lower case number
 *
 * @c: char type letter
 *
 * Return: return 0 on success and 1 on fail
 */

int _islower(int c)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
