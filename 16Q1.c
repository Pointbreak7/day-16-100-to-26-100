//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, n, binary = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (n > 0) {
        binary += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}
