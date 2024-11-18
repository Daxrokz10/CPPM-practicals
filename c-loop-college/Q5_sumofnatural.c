#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    int sum = 0;
    for(i=1;i<=10;i++){
        sum += i;
    }
    printf("Addition of First 10 Natural Numbers is %d\n",sum);
}