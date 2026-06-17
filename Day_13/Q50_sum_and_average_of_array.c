#include<stdio.h>

int main()
{
    int a[100],n, i,sum = 0;
      float avg;

    printf("Enter size of array:");
    scanf("%d",&n);

    for(i = 0;i <n; i++)
     scanf("%d", &a[i]);

    for(i =0;i< n; i++)
     sum += a[i];

    avg = (float)sum /n;

    printf("Sum =%d\n",sum);
    printf("Average =%.2f",avg);

    return 0;
}