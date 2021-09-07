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
if (i % 2 == 0)
{
printf("%d", str[i]);
}

printf(" ");
}
}
