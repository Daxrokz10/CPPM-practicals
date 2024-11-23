#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    for(num = 2; num <= 100; num++) {
        int isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
          
        if(isPrime == 1) {  
            printf("%d ", num);  
        }
    }
    return 0;
}