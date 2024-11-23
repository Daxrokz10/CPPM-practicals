#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , fd , ld;
    int sum = 0;

    printf("enter a number :");
    scanf("%d",&num);

    while(num > 0){
        ld = num % 10;
        sum = sum + ld;
        num = num /= 10;
        fd = num;
        
    }

    

    printf("Sum of digits are: %d", sum);
}