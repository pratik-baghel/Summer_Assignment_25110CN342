#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,temp;

 printf("Enter rows and cols : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   int j;

   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 for(i=0;i<r;i++)
 {
   temp=a[i][0];
   a[i][0]=a[i][c-1];
   a[i][c-1]=temp;
 }

 printf("Matrix after interchange :\n");

 for(i=0;i<r;i++)
 {
   int j;

   for(j=0;j<c;j++)
   {
      printf("%d ",a[i][j]);
   }

   printf("\n");
 }

 return 0;
}