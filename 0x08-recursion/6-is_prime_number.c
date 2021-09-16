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
	return (isPrime(i, n));
}
/**
 * isPrime - evaluate if number is prime
 * @a: integer
 * @b: innteger
 * Return: integer
 */

int isPrime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (isPrime(a + 1, b));
}
