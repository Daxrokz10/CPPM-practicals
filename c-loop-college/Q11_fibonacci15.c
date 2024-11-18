#include <stdio.h>

int main() {
    int n = 15; // Number of terms
    int fib1 = 0, fib2 = 1, nextTerm;

    printf("First 15 terms of the Fibonacci sequence:\n");

    for (int i = 0; i < n; i++) {
        if (i == 0) { // Use == for comparison
            printf("%d ", fib1); // Print the first term
        } else if (i == 1) { // Use == for comparison
            printf("%d ", fib2); // Print the second term
        } else {
            nextTerm = fib1 + fib2; // Calculate the next term
            printf("%d ", nextTerm); // Print the next term
            fib1 = fib2; // Update fib1 to the last term
            fib2 = nextTerm; // Update fib2 to the newly calculated term
        }
    }

    printf("\n"); // New line at the end
    return 0;
}