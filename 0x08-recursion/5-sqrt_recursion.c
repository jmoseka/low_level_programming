#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 * Return: squareroot or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (check(1, n));
}
/**
 * check - checks for the square root
 * @a: integer
 * @b: integer
 * Return: int
 */
int check(int a, int b)
{
if (a * a > b)
return (-1);
else if (a * a == b)
return (a);
else
return (check(a + 1, b));
}
