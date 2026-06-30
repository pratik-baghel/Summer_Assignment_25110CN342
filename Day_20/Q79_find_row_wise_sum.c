#include <stdio.h>
int main() {
    int r, c, a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Column-wise sum:\n");
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++)
            sum += a[i][j];
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
    return 0;
}