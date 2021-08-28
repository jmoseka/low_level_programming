#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  a program that prints all single digit numbers of base ten using putchar
 *
 * Return: return 0
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
