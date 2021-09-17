#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
