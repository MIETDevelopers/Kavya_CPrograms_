// Author :Kavya Dhar
// Creation Date: 20-3-21
//  Purpose: To Calculate the factorial of given number
#include <stdio.h>
int main() {
    int n, i;
   float fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %f", n, fact);
    }

    return 0;
}

