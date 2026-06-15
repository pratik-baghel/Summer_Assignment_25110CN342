#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    double result;

    printf("Enter x and n: ");
    scanf("%d %d", &x,&n);

    result = pow(x, n);

    printf("%d^%d = %.lf", x,n,result);

    return 0;
}