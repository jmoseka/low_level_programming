#include "main.h"
#include <stdio.h>

/**
*_print_rev_recursion - print in reverse
*@s: A pointer to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
