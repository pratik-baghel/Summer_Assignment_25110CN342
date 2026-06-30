#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
        count[(int)str[i]]++;

    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] == 1) {
            printf("First non-repeating character = %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No non-repeating character found\n");

    return 0;
}