#include <stdio.h>
#include <math.h>

int main(){
    int n;

    //Take number from user//
    printf("Enter a number: ");
    scanf("%d",&n);
    
    //decalre variable for square root
    int sqroot;
    sqroot = sqrt(n);
    printf("Sqrt of your number is: %d",sqroot);
}
