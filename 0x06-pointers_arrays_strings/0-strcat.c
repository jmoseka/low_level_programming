#include "main.h"

/**
*_strcat - concatenates two strings
**@dest: pointer to char
**@src: pointer to char
*Return: concantinated pointer string
*/

char *_strcat(char *dest, char *src)
{
while (*dest)
{
dest++;
}

while (*src)
{
*dest = *src;
src++;
dest++;
}

return (dest);
}
