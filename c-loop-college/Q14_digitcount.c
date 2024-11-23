#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , digitCounter = 0;


    printf("enter a number :");
    scanf("%d",&num);

    while(num > 0){
        digitCounter++;
        num /= 10;
    }

    printf("Number of digits are: %d",digitCounter);
}