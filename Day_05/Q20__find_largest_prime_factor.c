#include <stdio.h>

long long largestPrimeFactor(long long n) {
    long long largest = -1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if (n > 2)
        largest = n;

    return largest;
}
int main() {
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("Largest Prime Factor = %lld\n", largestPrimeFactor(n));

    return 0;
}