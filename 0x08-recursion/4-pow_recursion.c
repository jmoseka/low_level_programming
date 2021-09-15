#include "main.h"
#include<math.h>

/**
*_pow_recursion - return factorial number
*@x: base
*@y: power
*
*Return: factorial number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
