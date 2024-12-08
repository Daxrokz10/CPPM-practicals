#include <stdio.h>
#include <conio.h>

int main(){
     int array[10] , i , sum;
     float average;
   sum = 0;
   average = 0;
   printf("Enter 10 elements for the array:\n");
   for(i = 0; i < 10; i++) {
       printf("Element %d: ", i + 1);
       scanf("%d", &array[i]);
   }
   i = 0;
   for(i = 0;i < 10;i++){
    sum += array[i];
   }

    average = sum / 10;

    printf("Average is = %f\n", average);
}