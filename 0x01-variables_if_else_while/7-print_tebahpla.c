#include <stdio.h>

int main(void)
{
	int number = 100;

	while (number >= 90)
	{
		putchar(number);
		number--;
	}
	putchar('\n');
	return (0);
}
