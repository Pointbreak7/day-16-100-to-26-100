//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, x, y, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Formula: LCM = (x * y) / HCF
    lcm = (x * y) / hcf;

    printf("LCM = %d\n", lcm);

    return 0;
}
