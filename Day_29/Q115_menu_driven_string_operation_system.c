#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input_string[100];
    int user_choice;

    do {
        printf("\n1. find length of string\n");
        printf("2. reverse string\n");
        printf("3. convert to uppercase\n");
        printf("4. convert to lowercase\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);
        getchar();

        if (user_choice >= 1 && user_choice <= 4) {
            printf("enter a string: ");
            fgets(input_string, 100, stdin);
            input_string[strcspn(input_string,"\n")] = '\0';
        }

        switch (user_choice) {
            case 1:
                printf("length of string is %d\n"(int)strlen(input_string));
                break;

            case 2: {
                int length = strlen(input_string);
                char reversed_string[100];
                for (int i = 0; i < length; i++)
                    reversed_string[i] = input_string[length - 1 - i];
                reversed_string[length] = '\0';
                printf("reversed string is %s\n", reversed_string);
                break;
            }

            case 3:
                for (int i = 0; input_string[i] != '\0'; i++)
                    input_string[i] = toupper(input_string[i]);
                printf("uppercase string is %s\n", input_string);
                break;

            case 4:
                for (int i = 0; input_string[i] != '\0'; i++)
                    input_string[i] = tolower(input_string[i]);
                printf("lowercase string is %s\n", input_string);
                break;

            case 5:
                printf("exiting program\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 5);

    return 0;
}