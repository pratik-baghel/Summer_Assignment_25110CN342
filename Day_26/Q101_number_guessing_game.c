#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("guess a number between 1 and 100\n");

    do {
        printf("enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("too high, try again\n");
        else if (guess < secret)
            printf("too low, try again\n");
        else
            printf("correct! you guessed it in %d attempts\n", attempts);

    } while (guess != secret);

    return 0;
}