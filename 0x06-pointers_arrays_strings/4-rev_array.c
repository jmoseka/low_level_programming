#include "main.h"
#include <stdio.h>

/**
*reverse_array - reverses the content of an array of integers
*@a: pointer integer
*@n: length
*/
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i = n - 1; i >= n; i--)
	{
		a[i] = *(a + i);
	}
}
