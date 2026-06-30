#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array (in sorted order):\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array (in sorted order):\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n2) {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for (int x = 0; x < n1 + n2; x++)
        printf("%d ", merged[x]);
    printf("\n");

    return 0;
}