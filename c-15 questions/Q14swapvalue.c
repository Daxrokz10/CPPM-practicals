#include <stdio.h>
#include <math.h>

int main(){
    int a,b;

    printf("Enter the value for first number: ");
    scanf("%d",&a);
    printf("Enter the value for second number: ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping: a= %d,  b= %d",a,b);

    //ill be honest i dont understand the logic
}