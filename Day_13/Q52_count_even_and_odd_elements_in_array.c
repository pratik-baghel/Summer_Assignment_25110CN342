#include<stdio.h>

int main()
{
    int a[100], n, i;
    int even =0,odd =0;

    printf("Enter size of array: ");
    scanf("%d",&n);

        for(i =0; i< n;i++)
        scanf("%d",&a[i]);

    for(i = 0;i < n;i++)
    {
        if(a[i] % 2 ==0)
        even++;
        else
        odd++;
    }

    printf("Even Elements = %d\n",even);
    printf("Odd Elements = %d",odd);
  
    return 0;
}