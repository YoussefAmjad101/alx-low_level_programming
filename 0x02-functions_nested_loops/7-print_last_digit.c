#include <stdio.h>
#include <stdlib.h>

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
