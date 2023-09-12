#include "main.h"
/**
 * print_alphabet_x10 - my program
 * Description: Print alphabets in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void) {
    for(int i = 0; i < 10; i++) {
        for(char c = 'a'; c <= 'z'; c++) {
            putchar(c);
        }
        putchar('\n');
    }
}
int main() {
    print_alphabet_x10();
  return 0;
}
