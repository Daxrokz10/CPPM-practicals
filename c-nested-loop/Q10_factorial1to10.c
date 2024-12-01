#include <stdio.h>

int main(){
    
    int factorial = 1;

    for(int i=1; i <= 10; i++){
        
    for(int j=i ; j <= i ; j++){
        printf("Value of fact: %d\n", factorial);
        factorial = factorial * j;
    }
    printf("Factorial of %d is %d \n",i,factorial);
    }
}