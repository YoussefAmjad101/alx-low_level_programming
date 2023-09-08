#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int number;
	int digit;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	digit = number % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", number, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", number, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", number, digit);
	}
	return (0);
}
