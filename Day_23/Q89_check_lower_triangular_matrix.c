#include<stdio.h>

int main()
{
 int a[10][10];
 int n,i,j;
 int flag=1;

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
   for(j=i+1;j<n;j++)
   {
      if(a[i][j]!=0)
      {
         flag=0;
      }
   }
 }

 if(flag==1)
    printf("Lower Triangular Matrix");

 else
    printf("Not Lower Triangular Matrix");

 return 0;
}