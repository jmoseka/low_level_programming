#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - program that prints the status of the last digit number
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastNumber;

	lastNumber = n % 10;

	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d", n, lastNumber);
	}
	else if (lastNumber < 6 && lastNumber != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastNumber);
	}
	return (0);
}
