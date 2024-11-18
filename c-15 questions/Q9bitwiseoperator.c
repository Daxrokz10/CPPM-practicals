#include <stdio.h>

int main(){
    int a=1,b=0;

    //AND
    if(a==1 && b==0){
        printf("true \n");      //expected answer is true because a is 1 and b is 0

    }
    else{
        printf("false \n");
    }
    
    //OR
    if(a==0 || b==1){           //i made both false so that we can show that or wont print  aka expected answer FALSE
        printf("true \n");
    }
    else{
        printf("false \n");
    }    

    if(a==1 || b==1){           //to show that if one condition is true it'll print true  aka expected answer TRUE
        printf("true \n");
    }
    else{
        printf("false \n");
    }

    //NOT
    if(a!=b){
        printf("true \n");      //answer expected is true because we know that the value of a is not equal to b
    }
    else{
        printf("false \n");
    }
}