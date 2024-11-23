#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , evenSum , oddSum;
    evenSum = 0;
    oddSum = 0;

    printf("enter a number :");
    scanf("%d",&num);

    for(int i=1;i <=num;i++){
        if(i%2==0){
            evenSum=evenSum+i;
        }
        else{
            oddSum=oddSum+i;
        }
    }
    printf("Sum of even digits are: %d \n", evenSum);
    printf("Sum of odd digits are: %d \n", oddSum);
}