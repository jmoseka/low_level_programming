
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints lowercase and uppercase alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char ch, p;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
