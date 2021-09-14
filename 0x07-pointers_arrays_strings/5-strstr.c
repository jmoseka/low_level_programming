#include "main.h"
#include <string.h>

/**
*_strstr - checks for a character in a string
*@haystack: C string to be scanned
*@needle: This is the small string to be searched with-in haystack string.
*
*Return: A pointer a value or null
*/

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	haystack = strstr(p, needle);

	return (haystack);
}
