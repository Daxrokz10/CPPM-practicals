#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i=1;i<=20;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
}