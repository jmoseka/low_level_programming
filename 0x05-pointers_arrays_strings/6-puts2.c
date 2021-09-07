#include <stdio.h>
#include <string.h>

/**
 *puts2 - prints every other character
 **@str: pointer to char
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
printf("%c", str[i]);

i = i + 2;
}

printf(" ");
}
