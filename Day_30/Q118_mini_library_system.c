#include <stdio.h>
#include <string.h>

int main() {
    int number_of_books;
    printf("enter number of books: ");
    scanf("%d", &number_of_books);
    getchar();

    char book_title[number_of_books][50];
    int is_available[number_of_books];

    for (int i = 0; i < number_of_books; i++) {
        printf("\nenter title of book %d: ", i + 1);
        fgets(book_title[i], 50, stdin);
        book_title[i][strcspn(book_title[i], "\n")] = '\0';
        is_available[i] = 1;
    }

    int user_choice;
    char search_title[50];

    do {
        printf("\n1. display all books\n");
        printf("2. issue a book\n");
        printf("3. return a book\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);
        getchar();

        switch (user_choice) {
            case 1:
                printf("\nlibrary books:\n");
                for (int i = 0; i < number_of_books; i++) {
                    printf("%s - %s\n", book_title[i], is_available[i] ? "available" : "issued");
                }
                break;

            case 2:
                printf("enter title of book to issue: ");
                fgets(search_title, 50, stdin);
                search_title[strcspn(search_title, "\n")] = '\0';
                for (int i = 0; i < number_of_books; i++) {
                    if (strcmp(book_title[i], search_title) == 0) {
                        if (is_available[i]) {
                            is_available[i] = 0;
                            printf("book issued successfully\n");
                        } else {
                            printf("book is already issued\n");
                        }
                    }
                }
                break;

            case 3:
                printf("enter title of book to return: ");
                fgets(search_title, 50, stdin);
                search_title[strcspn(search_title, "\n")] = '\0';
                for (int i = 0; i < number_of_books; i++) {
                    if (strcmp(book_title[i], search_title) == 0) {
                        is_available[i] = 1;
                        printf("book returned successfully\n");
                    }
                }
                break;

            case 4:
                printf("exiting library system\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 4);

    return 0;
}