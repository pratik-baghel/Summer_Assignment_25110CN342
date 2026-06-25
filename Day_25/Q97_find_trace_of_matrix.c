#include<stdio.h>

int main()
{
 int a[10][10];
 int n,i,j;
 int trace=0;

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
    trace=trace+a[i][i];
 }

 printf("Trace = %d",trace);

 return 0;
}