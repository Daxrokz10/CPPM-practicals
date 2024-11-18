#include <stdio.h>
#include <math.h>

int main(){
    int a,b;

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    //to check if equal
    if(a==b){
        printf("The numbers are equal \n");
    }
    else{
        printf("The numbers aren't equal \n");
    }

    //to check greater
    if(a>b){
        printf("%d  is greater than %d \n",a,b);
    }
    else{
        printf("%d  is lesser than %d \n",b,a);
    }

    //to check greater or equal to
    if(a>=b){
        printf("%d is greater than or equal to %d \n",a,b);
    }
    else{
        printf("%d is not greater than or equal to %d \n",b,a);
    }

    //to check lesser than or equal to
    if(a<=b){
        printf("%d is lesser than or equal to %d \n",b,a);
    }
    else{
        printf("%d is not lesser than or equal to %d \n",a,b);
    }
}