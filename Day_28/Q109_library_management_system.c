#include <stdio.h>
#include <string.h>

int main() {
    int number_of_books;
    printf("enter number of books: ");
    scanf("%d", &number_of_books);
    getchar();

    char book_title[number_of_books][50];
    char author_name[number_of_books][50];
    int book_quantity[number_of_books];

    for (int i = 0; i < number_of_books; i++) {
        printf("\nenter details of book %d\n", i + 1);

        printf("title: ");
        fgets(book_title[i], 50, stdin);
        book_title[i][strcspn(book_title[i], "\n")] = '\0';

        printf("author: ");
        fgets(author_name[i], 50, stdin);
        author_name[i][strcspn(author_name[i], "\n")] = '\0';

        printf("quantity: ");
        scanf("%d", &book_quantity[i]);
        getchar();
    }

    printf("\nlibrary records:\n");
    printf("title\tauthor\tquantity\n");
    for (int i = 0; i < number_of_books; i++) {
        printf("%s\t%s\t%d\n", book_title[i], author_name[i], book_quantity[i]);
    }

    return 0;
}