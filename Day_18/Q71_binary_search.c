#include<stdio.h>

int main()
{
    int a[100],n,i,num;
    int low,high,mid;

    printf("Enter size : ");
    scanf("%d",&n);

    printf("Enter sorted array :\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element : ");
    scanf("%d",&num);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==num)
        {
            printf("Found at position %d",mid+1);
            return 0;
        }
        else if(a[mid]<num)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    printf("Element not found");

    return 0;
}