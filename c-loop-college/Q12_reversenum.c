
#include <stdio.h>

int main(){
    int num,reversedNum,remainder;
    reversedNum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num !=0){
        int lastDigit;
        lastDigit = num % 10 ;
        reversedNum = reversedNum * 10 + lastDigit;
        num = num/10;
    }
    printf("Reversed number: %d",reversedNum);
}