#include <stdio.h>

int main(void)
{
	int number1;
	int number2;

	for (number1 = 48; number1 <= 57; number1++)
	{
		putchar(number1);
	}
	for (number2 = 97; number2 <= 102; number2++)
	{
		putchar(number2);
	}
	putchar('\n');
	return (0);
}
