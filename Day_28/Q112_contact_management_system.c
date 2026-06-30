#include <stdio.h>
#include <string.h>

int main() {
    int number_of_contacts;
    printf("enter number of contacts: ");
    scanf("%d", &number_of_contacts);
    getchar();

    char contact_name[number_of_contacts][50];
    char phone_number[number_of_contacts][15];

    for (int i = 0; i < number_of_contacts; i++) {
        printf("\nenter details of contact %d\n", i + 1);

        printf("name: ");
        fgets(contact_name[i], 50, stdin);
        contact_name[i][strcspn(contact_name[i], "\n")] = '\0';

        printf("phone number: ");
        fgets(phone_number[i], 15, stdin);
        phone_number[i][strcspn(phone_number[i], "\n")] = '\0';
    }

    printf("\ncontact list:\n");
    printf("name\tphone number\n");
    for (int i = 0; i < number_of_contacts; i++) {
        printf("%s\t%s\n", contact_name[i], phone_number[i]);
    }

    return 0;
}