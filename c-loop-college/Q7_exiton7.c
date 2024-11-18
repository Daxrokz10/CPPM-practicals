#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i=1;i<=10;i++){
        if(i==7){
            break;
        }
            printf("%d\n",i);
    }
    printf("loop has been exited on %d\n",i);
}