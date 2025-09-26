// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

void findComplement(char binary[]) {
    for (int i = 0; i < strlen(binary); i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
}

int main() {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    findComplement(binary);
    
    printf("1's Complement: %s\n", binary);
    
    return 0;
}
