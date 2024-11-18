#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a>b){
        printf("%d is larger than %d",a,b);
    }
    else{
        printf("%d is equal to or not larger than %d",a,b);
    }
}