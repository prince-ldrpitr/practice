// Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main() {
    int n,flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        printf("%d is not a prime number", n);
        return 0;
    }

    // Check divisibility
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}

