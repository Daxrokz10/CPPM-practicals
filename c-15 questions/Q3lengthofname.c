#include <stdio.h>
#include <string.h>

int main(){
    char name[100];

    printf("Enter your name: ");
    scanf("%s",name);
    
    int length;
    length = strlen(name);

    printf("Length of your name is: %d",length);
}