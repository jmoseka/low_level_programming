#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
