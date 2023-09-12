#include "main.h"
/**
 * _abs - my program
 * Description: computes the absolute value of an integer.
 * @nbr: The number to compute its absolute value.
 * Return: Absolute value of the number.
 */

int _abs(int n) {
    if(n < 0) {
        return -n;
    } else {
        return n;
    }
}


int main() {
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
  return 0;
}
