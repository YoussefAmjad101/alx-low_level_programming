#include "main.h"
/**
 * _islower - my program
 * Description: checks for lowercase character
 * @c: The variable that stocks the character for cheching
 * Return: 1 if the charater is lowercase or o if not
 */
int _islower(int c) {
    if(c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}



int main() {
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
  return 0;
}
