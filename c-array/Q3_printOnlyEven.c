#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10] , i;

    printf("Enter 10 elements for the array:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    i = 0;

    printf("Even numbers in the array are:");
    for(i=0;i<10;i++){
        if(array[i] % 2 == 0){
            printf(" %d ",array[i]);
        }
    }
 
}