#include <stdio.h>

int main() {
    int n,first = 0, second = 1, next;

    printf("Enter the position (n): ");
    scanf("%d",&n);

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    if (n == 0) {
        printf("The 0th term is: 0\n");
    } else {
        printf("The %d-th term is:%d\n",n,second);
    }

    return 0;
}
