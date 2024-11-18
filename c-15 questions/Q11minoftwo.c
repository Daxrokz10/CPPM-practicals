#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a<b){
        printf("%d is smaller than %d",a,b);
    }
    else{
        printf("%d is equal to or not smaller than %d",a,b);
    }
}