#include <stdio.h>

/**
*main - prints its name
*
*@argc: count of the arguements supllied to the program
*@argv: points to the strings of the arguement passed
*
*Return: 0 (success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
