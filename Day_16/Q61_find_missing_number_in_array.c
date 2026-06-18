#include <stdio.h>

int main()
{
    int a[100], n,i;
    int sum=0, total=0;

    printf("Enter value of n:");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    total=n*(n+1)/2;

    printf("Missing Number = %d",total-sum);

    return 0;
}