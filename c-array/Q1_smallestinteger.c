#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int array[10] , i , loop ,smallest;
   
   printf("Enter 10 elements for the array:\n");
   for(i = 0; i < 10; i++) {
       printf("Element %d: ", i + 1);
       scanf("%d", &array[i]);
   }
  

   smallest = array[0];
   
   for(loop = 1; loop < 10; loop++) {
      if( smallest > array[loop] ) 
         smallest = array[loop];
   }
   
   printf("Smallest element of array is %d", smallest);   
   
   return 0;
}