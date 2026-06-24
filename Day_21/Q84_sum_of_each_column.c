#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j,sum;

 printf("Enter rows and cols : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 for(i=0;i<c;i++)
 {
   sum=0;

   for(j=0;j<r;j++)
   {
      sum=sum+a[j][i];
   }

   printf("Sum of Column %d = %d\n",i+1,sum);
 }

 return 0;
}