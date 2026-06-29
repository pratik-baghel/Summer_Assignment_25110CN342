#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j,min;

 printf("Enter rows and columns: ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 min=a[0][0];

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      if(a[i][j]<min)
         min=a[i][j];
   }
 }

 printf("Smallest = %d",min);

 return 0;
}