//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, n, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    while (n != 0) {
        digits++;
        n /= 10;
    }

    n = num;

    while (n != 0) {
        remainder = n % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        result += power;
        n /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
