#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float array_one[5];
    int i;

    printf("Enter 5 float elements for the array 1:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &array_one[i]);
    }
    printf("\n\n");
    for(i = 0; i < 5; i++) {
        if(array_one[i] != (int)array_one[i]) { // Check if the number has a decimal part
            float ceiled_value = ceil(array_one[i]); // Store the result of ceil
            printf("Ceiled value of Element %d: %f\n", i + 1, ceiled_value); // Print the ceiled value
        }
    }
    return 0; // Return statement
}