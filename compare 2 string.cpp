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
    
    // Compare the two strings and print the result
    if (strcmp(str1, str2) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
    
    return 0;
}

