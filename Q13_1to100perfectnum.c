#include <stdio.h>

int main() {
    int sum, i;

    for(i = 1; i <= 1000; i++) {
        sum = 0;

        for(int j = 1; j <= i / 2; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d is a perfect number\n", i);
        }
    }
    return 0;
}