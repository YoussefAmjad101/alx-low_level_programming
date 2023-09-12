#include <stdio.h>

int print_sign(int n) {
    if(n > 0) {
        printf("+\n");
        return 1;
    } else if(n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}


int main() {
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
  return 0;
}
