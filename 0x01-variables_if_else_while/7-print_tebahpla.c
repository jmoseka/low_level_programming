#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints letter in reverse
 *
 * Return: return 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
