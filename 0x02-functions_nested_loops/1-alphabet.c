#include "main.h"
/**
 * print_alphabet - the essentiel function
 * Description: prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void) {
    for(char c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }
    putchar('\n');
}
int main() {
    print_alphabet();
  return 0;
}
