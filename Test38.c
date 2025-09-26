//  Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
    int number, product = 1, digit;
    int hasOddDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOddDigit = 1;
        }
        number /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
