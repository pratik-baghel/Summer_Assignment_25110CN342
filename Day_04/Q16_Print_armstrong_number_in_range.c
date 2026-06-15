#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, result, digits;

    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n",start,end);


    for (int i = start; i <= end; i++) {
        num = i;
        originalNum = num;
        digits = 0;
        result = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num; 

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += round(pow(remainder, digits)); 
            originalNum /= 10;
        }

        if (result == num && num != 0) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
