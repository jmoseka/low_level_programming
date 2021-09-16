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
	int i = 2;

	if (i == 1)
	{
		return (1);
	}
	else
	{
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return is_prime_number(n, i - 1);
	}

}
