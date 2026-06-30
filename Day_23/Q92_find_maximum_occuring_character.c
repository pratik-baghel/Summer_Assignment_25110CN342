#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count[256] = {0};
    int maxCount = 0;
    char maxChar = str[0];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
        count[(int)str[i]]++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] > maxCount) {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c (%d times)\n", maxChar, maxCount);
    return 0;
}