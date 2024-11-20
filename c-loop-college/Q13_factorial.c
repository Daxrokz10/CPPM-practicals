#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,num;
    int factorial = 1;

    printf("Enter the number for which factorial has to be calculated: ");
    scanf("%d",&num);

    for(i=1 ; i <= num ; i++){
        
        factorial = factorial * i;
    }
    printf("Factorial is of %d is %d \n",num,factorial);
    return 0;
}