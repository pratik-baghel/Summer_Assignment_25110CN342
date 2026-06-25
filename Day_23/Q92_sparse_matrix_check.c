#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j;
 int zero=0,total;

 printf("Enter rows and cols : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 total=r*c;

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      if(a[i][j]==0)
      {
         zero++;
      }
   }
 }

 if(zero>total/2)
    printf("Sparse Matrix");

 else
    printf("Not Sparse Matrix");

 return 0;
}