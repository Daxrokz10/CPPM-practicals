#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    do {
        printf("Enter 0 to exit loop: ");
        scanf("%d", &i);  

        if (i != 0) { 
            printf("Enter 0 to leave\n");  
        } else {
            printf("You entered: %d\n", i); 
        }

    } while (i != 0);  

    printf("BYE BYE!\n");  
    return 0;  
}