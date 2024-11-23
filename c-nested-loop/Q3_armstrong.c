#include <stdio.h>

int main() {
    int num, n1, n2, n3,temp, sum;

    for(num=100;num<=999;num++){
        n1 = num % 10;
        temp = num / 10;
        n2 = temp % 10;
        n3 = num / 100;

        sum = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
        if(sum == num) {
            printf("%d\n", num);
        }
    }
}