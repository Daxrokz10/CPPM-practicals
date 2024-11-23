#include <stdio.h>

int main(){
    int num,reversedNum,remainder;
    reversedNum = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num !=0){
        int lastDigit;
        lastDigit = num % 10 ;
        reversedNum = reversedNum * 10 + lastDigit;
        num = num/10;
    }
     if(temp == reversedNum){    
    printf("The number is a palindrome");
        }else{
        printf("The number is not a palindrome");  
        }
}