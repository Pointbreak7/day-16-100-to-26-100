//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow10 = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow10 *= 10;
    }
    first = temp;

    swapped = last * pow10 + (num % pow10) - last + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
