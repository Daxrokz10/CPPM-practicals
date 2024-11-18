#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    
    printf("Give string to check for palindrome: ");
    scanf("%s", str);  

    // Copy str to rev
    strcpy(rev, str);
    
    // Reverse the string in rev
    strrev(rev);  

    
    if (strcmp(str, rev) == 0) {  
        printf("Your string is a palindrome\n");
    } else {
        printf("Your string is not a palindrome\n");
    }

    return 0;
}