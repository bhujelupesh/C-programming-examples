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

    // Print the lengths of the two strings
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);
    
    return 0;
}

