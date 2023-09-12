#include "main.h"
/**
 * print_last_digit - my program
 * Description: prints the last digit of a number
 * @number: variable that stocks the number that we want to get its last digit
 * Return: Return the value of the last digit of number.
 */
int print_last_digit(int n) {
    int last_digit = abs(n % 10);
    printf("%d\n", last_digit);
    return last_digit;
}

int main() {
    int r;
    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
  return 0;
}
