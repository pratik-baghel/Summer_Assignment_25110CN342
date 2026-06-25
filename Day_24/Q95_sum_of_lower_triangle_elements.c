#include<stdio.h>

int main()
{
 int a[10][10];
 int n,i,j;
 int sum=0;

 printf("Enter order : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 for(i=0;i<n;i++)
 {
   for(j=0;j<=i;j++)
   {
      sum=sum+a[i][j];
   }
 }

 printf("Sum = %d",sum);

 return 0;
}