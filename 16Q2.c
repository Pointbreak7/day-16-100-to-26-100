//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main(){
    int num;
 int original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}