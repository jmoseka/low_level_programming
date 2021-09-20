#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: char type string
 * Return: returns integer converted
 */
int _atoi(char *s)
{
unsigned int sign = 1, resp = 0, firstNum, i;

for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
{
if (s[firstNum] == '-')
{
sign *= -1;
}
}
for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}
return (sign *resp);
}
