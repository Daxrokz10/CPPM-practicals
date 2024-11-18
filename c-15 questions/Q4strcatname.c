#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    char fname[10] , lname[10];
    printf("Enter fname :");
    scanf("%s",fname);
    printf("Enter lname :");
    scanf("%s",lname);
    strcpy(name,fname);                     //copy fname into name//
    strcat(name,lname);                     //join both the names//
    sprintf(name, "%s %s", fname , lname);  //to add space between the two names//
    printf("Your name is %s\n",name);

    return 0;
}

