#include <stdio.h>

int main(){
    int array_one[10],array_even[5],array_odd[5];
    int evenCount = 0 , oddCount = 0;
    int i;

    for(i=0;i<10;i++){
        printf("Enter value for element %d: ",i);
        scanf("%d",&array_one[i]);
    }
    for(i=0;i<10;i++){
        if (array_one[i]%2==0){
            array_even[evenCount]=array_one[i];
            evenCount++;
        }else{
            array_odd[oddCount]=array_one[i];
            oddCount++;
        }
    }
    printf("Even array is: \n");
    for(i=0;i<evenCount;i++){
        printf(" %d ,",array_even[i]);
    }
    printf("\n\n");
    printf("Odd array is: \n");
    for(i=0;i<oddCount;i++){
        printf(" %d ,",array_odd[i]);
    }
}