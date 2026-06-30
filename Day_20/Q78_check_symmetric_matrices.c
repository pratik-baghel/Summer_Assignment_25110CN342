#include <stdio.h>
int main() {
    int n, a[10][10];
    int isSymmetric = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}