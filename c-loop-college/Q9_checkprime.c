#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.", num);
            return 0;
        }
    }

    printf("%d is a prime number.", num);
    return 0;
}