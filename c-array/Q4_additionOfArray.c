#include <stdio.h>
#include <stdlib.h>

int main(){
    int array_one[5],array_two[5],array_ans[5] , i;

    printf("Enter 5 elements for the array 1:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array_one[i]);
    }
    printf("\n\n");
    i=0;

    printf("Enter 5 elements for the array 2:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array_two[i]);
    }

   for(i = 0; i < 5; i++) {
        array_ans[i] = array_one[i] + array_two[i];
    }


    printf("The sum of the two arrays is:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, array_ans[i]);
    }
}