#include <stdio.h>

int main()
{
    int a[50],b[50];
    int n1, n2, i, j, flag;

    printf("Enter size of first array:");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array:");
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Union: ");

    for(i=0;i<n1; i++)
    {
        printf("%d ", a[i]);
    }
    for(i=0;i<n2;i++)
    {
        flag = 0;

        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
            {
             flag = 1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d ", b[i]);
        }
    }

    return 0;
}