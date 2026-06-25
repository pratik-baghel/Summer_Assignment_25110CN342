#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j,temp;

 printf("Enter rows and cols : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 for(j=0;j<c;j++)
 {
   temp=a[0][j];
   a[0][j]=a[r-1][j];
   a[r-1][j]=temp;
 }

 printf("Matrix after interchange :\n");

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      printf("%d ",a[i][j]);
   }

   printf("\n");
 }

 return 0;
}