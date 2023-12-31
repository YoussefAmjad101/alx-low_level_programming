#include "main.h"
/**
 * print_to_98 - my program
 * Description: print all natural numbers from n to 98, followed by a new line.
 * @n; the variable that stocks wich number we start from.
 * Return: 0.
 */
void print_to_98(int n) {
    for (int i = n; i <= 98; i++) {
        printf("%d", i);
        if (i != 98) {
            printf(", ");
        }
    }
    printf("\n");
}
