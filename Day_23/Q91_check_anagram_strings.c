#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
        count[(int)str1[i]]++;

    for (int i = 0; str2[i] != '\0'; i++)
        count[(int)str2[i]]--;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");

    return 0;
}