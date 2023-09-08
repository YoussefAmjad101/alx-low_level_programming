#include <stdio.h>

int main(void)
{
	int number = 2;

	while (number <= 100)
	{
		if (number == 101 || number == 110)
		{
			number++;
			continue;
		}
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
