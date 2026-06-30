#include <stdio.h>
int main() {
    char str[200];
    int wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
            wordCount++;
    }
    wordCount++;

    printf("Number of words = %d\n", wordCount);
    return 0;
}