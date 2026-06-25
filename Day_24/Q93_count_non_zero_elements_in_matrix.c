#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j;
 int count=0;

 printf("Enter rows and cols : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }

 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      if(a[i][j]!=0)
      {
         count++;
      }
   }
 }

 printf("Non Zero Elements = %d",count);

 return 0;
}