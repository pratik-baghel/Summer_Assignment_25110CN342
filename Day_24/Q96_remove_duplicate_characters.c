#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int seen[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(int)str[i]]) {
            seen[(int)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates = %s\n", result);
    return 0;
}