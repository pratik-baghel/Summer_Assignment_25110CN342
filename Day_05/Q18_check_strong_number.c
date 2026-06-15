#include <stdio.h>

int main() {
    int num,originalNum,remainder,sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

        int fact = 1;
        for (int i = 1;i <=remainder;i++) {
            fact *= i;
        }

        sum += fact;
        originalNum /= 10;
    }

    if (sum == num && num > 0) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
