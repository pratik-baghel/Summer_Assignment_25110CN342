#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char word[100], longest[100] = "";
    int wi = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    for (int i = 0; i <= length; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[wi++] = str[i];
        } else {
            word[wi] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            wi = 0;
        }
    }

    printf("Longest word = %s\n", longest);
    return 0;
}