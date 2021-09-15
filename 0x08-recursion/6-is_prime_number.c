#include "main.h"
#include <stdio.h>

/**
*is_prime_number - return factorial number
*@n: prime  number
*
*Return: return 0 or 1
*/
int is_prime_number(int n)
{
	int i, p = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			p++;
		}
	}
	if (p == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
