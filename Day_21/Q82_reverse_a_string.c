#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int length, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    length = strlen(str);
    for (i = length - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];
    rev[j] = '\0';

    printf("Reversed string = %s\n", rev);
    return 0;
}