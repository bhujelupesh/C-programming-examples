#include <string.h>
#include <stdio.h>

int main() {
    char str1[100];

    // Read the strings from user input
    printf("Enter first string: ");
    scanf("%s", str1);
    
    // Reverse the string and print the result
    strrev(str1);
    printf("Reverse string is:%s",str1);

    return 0;
}

