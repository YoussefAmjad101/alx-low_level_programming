#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	if (number > 0)
	{
		printf("%d is positive\n", number);
	}
	else if (number == 0)
	{
		printf("%d is zero\n", number);
	}
	else
	{
		printf("%d is negative\n", nnumber);
	}
	return (0);
}
