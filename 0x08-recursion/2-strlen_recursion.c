#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - return legth of string
*@s: A pointer to string to find its length
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
