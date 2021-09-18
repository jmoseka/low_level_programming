#include <stdio.h>
#include <stdlib.h>

/**
*main - prints its name
*
*@argc: count of the arguements supllied to the program
*@argv: points to the strings of the arguement passed
*
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
