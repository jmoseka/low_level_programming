#include "main.h"
#include <stdio.h>

/**
*factorial - return factorial number
*@n: factorial number
*
*Return: factorial number
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
