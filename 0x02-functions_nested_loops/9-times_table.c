#include <stdio.h>
void times_table(void) {
    for(int i = 0; i <= 9; i++) {
        printf("%d * 9 = %d\n", i, i * 9);
    }
}

int main() {
  times_table();
  return 0;
}
