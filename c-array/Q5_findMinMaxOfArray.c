#include <stdio.h>

int main(){
    int i,min,max;
    int array_one[5];
    min = array_one[0];
    max = array_one[0];

    printf("Enter 5 elements for the array: \n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array_one[i]);
    }

    for(i=0;i<=5;i++){
        if(array_one[i] < min){
            min = array_one[i];
        }
    }printf("Minimum element of the array is : %d\n", min);

    for(i=0;i<=5;i++){
        if(array_one[i] > max){
            max = array_one[i];
        }
    }printf("Maximum element of the array is : %d\n", max);

}