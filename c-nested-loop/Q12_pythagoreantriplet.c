#include <stdio.h>

int main(){
    int a,b,c;

    for(a=1;a<=1000;a++){
        for(b=1;b<=1000;b++){
            for(c=1;c<=1000;c++){
                if(a*a+b*b == c*c){
                    printf("(%d,%d,%d)\n",a,b,c);
                }
            }
        }
    }
}