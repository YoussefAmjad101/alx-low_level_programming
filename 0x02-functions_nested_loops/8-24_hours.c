#include "main.h"
/**
 * jack_bauer - my program
 * Description: prints every minute of the day of Jack Bauer.
 * Return: Void
 */
void jack_bauer(void) {
    for(int hour = 0; hour < 24; hour++) {
        for(int minute = 0; minute < 60; minute++) {
            printf("%02d:%02d\n", hour, minute);
        }
    }
}

int main() {
  jack_bauer();
  return 0;
}
