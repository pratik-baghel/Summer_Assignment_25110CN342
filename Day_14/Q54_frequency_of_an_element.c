#include <stdio.h>

int main()
{
    int a[100], n, i, num, count = 0;

    printf("Enter size:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element:");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
            count++;
    }

    printf("Frequency= %d",count);

    return 0;
}