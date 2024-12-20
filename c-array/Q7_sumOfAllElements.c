#include <stdio.h>

int main(){
    int array[5],i,temp;
    temp = 0;
    for(i=0;i<5;i++){
        printf("Enter value for element %d: ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++){
        temp+=array[i];
    }
    printf("Sum of all elements is: %d",temp);
}