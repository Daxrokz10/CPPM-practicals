#include <stdio.h>
#include <math.h>

int main(){
    int i,j;

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%d x %d= %d \n",i,j,i*j);
        }
    }
}