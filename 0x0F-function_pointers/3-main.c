#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs airthmetic operations
 *@argc: arg count
 *@argv: arg value
 *Return:int
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if ((get_op_func(s)) == NULL)
	{
		return (99);
	}

	c = (get_op_func(s)) (a,b);

	printf("%d", c);
	
	return (0);
}
