#include <stdio.h>

int main()
{
    int a[100], n, i, num;

    printf("Enter size:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);

    printf("Enter number to search:");
    scanf("%d", &num);

    for(i=0;i< n; i++)
    {
        if(a[i] == num)
        {
            printf("Element found at position %d", i + 1);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}