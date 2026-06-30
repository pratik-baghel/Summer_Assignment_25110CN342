#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("enter your age: ");
    scanf("%d", &age);

    printf("are you a citizen? (y/n): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'y')) {
        printf("you are eligible to vote\n");
    } else if (age < 18) {
        printf("you are not eligible to vote, age is below 18\n");
    } else {
        printf("you are not eligible to vote, citizenship required\n");
    }

    return 0;
}