//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, onesComp = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        if (digit == 0)
            onesComp += 1 * place;
        else
            onesComp += 0 * place;

        binary /= 10;
        place *= 10;
    }

    printf("1's Complement = %lld\n", onesComp);

    return 0;
}
