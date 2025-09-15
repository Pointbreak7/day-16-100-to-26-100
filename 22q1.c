//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, n, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    while (n > 0) {
        digit = n % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
