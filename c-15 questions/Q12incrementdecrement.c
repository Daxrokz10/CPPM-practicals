#include <stdio.h>
#include <math.h>

int main(){
    int a,b;

    printf("Enter number for increment: ");
    scanf("%d",&a);

    int increment= ++a;
    printf("After increment: %d \n",increment);

    printf("Enter number for decrement: ");
    scanf("%d",&b);

    int decrement= --b;
    printf("After increment: %d \n",decrement);
}