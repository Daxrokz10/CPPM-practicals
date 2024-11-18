#include <stdio.h>
#include <math.h>

int main(){
    int a,b,temp;
    
    printf("Enter the value for first number: ");
    scanf("%d",&a);
    printf("Enter the value for second number: ");
    scanf("%d",&b);

    temp=a;  //stored value of a in temp
    a=b;     //made a=b
    b=temp;  //and now gave b the value of temp which is a

    printf("Now value of first number is= %d \n",a);

    printf("Now value of second number is= %d \n",b);


}