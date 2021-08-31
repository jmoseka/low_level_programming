#include "main.h"
#include <string.h>

/**
 * main - prints Holberton
 *
 *Return: Always (0)
 */
int main(void)
{
	char c[] = "Holberton";
	int length, i;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
