// 
// #include <stdio.h>

// int main() {
//     int num, i;

//     for(num = 2; num <= 100; num++) {
//         int isPrime = 1; // Assume num is prime

//         for (i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = 0; // num is not prime
//                 break; // Exit the inner loop
//             }
//         }

//         // Print num only if it is prime
//         if (isPrime) {
//             printf("%d ", num); // Print the prime number
//         }
//     }

//     return 0;
// }