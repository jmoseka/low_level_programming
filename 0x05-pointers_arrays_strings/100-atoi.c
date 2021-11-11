#include "main.h"

/**
 *_atoi - convert string to int
 * @s: string to convert to integer
 * Return: digit(the integer)
 */

int _atoi(char *s)
{

	int idx_digit = (index_digit(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (index_digit(s));

	if (idx_digit < 0) /* if no digits, exit program */
		return (0);

	sign = _sign(s);

	while ((s[idx_digit] >= '0' && s[idx_digit] <= '9')
	       && (idx_digit <= _strlen(s))) /* count digits to print */
	{
		digits_to_print += 1;
		idx_digit++;
	}

	i = 1;
	while (i < digits_to_print) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
