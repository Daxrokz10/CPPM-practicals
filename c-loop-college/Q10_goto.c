#include <stdio.h>

int main() {
    int i, j;
    replay_outer:
    for(i = 1; i <= 10; i++) {
        printf("Outer loop: %d\n", i);
        replay_inner:
        for(j = 1; j <= 5; j++) {
            printf("Inner loop: %d\n", j);
            if (j == 3) {
                // Using goto to jump back to the outer loop
                goto replay_outer;
            }
        }
    }
    return 0;
}