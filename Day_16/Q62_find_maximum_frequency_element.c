#include <stdio.h>

int main()
{
    int a[100],n,i,j;
    int maxCount=0,element;

    printf("Enter size: ");
      scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
             count++;
            }
        }
        if(count > maxCount)
        {
          maxCount = count;
            element = a[i];
        }
    }
    printf("Element = %d",element);

    return 0;
}