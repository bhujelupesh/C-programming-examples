#include <string.h>
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1, len2;

    // Read two strings from user input
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenate the two strings and print the result
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}

