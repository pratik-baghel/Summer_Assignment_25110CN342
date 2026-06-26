#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j;
 int even=0,odd=0;

 printf("Enter rows and columns : ");
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
      if(a[i][j]%2==0)
         even++;

      else
         odd++;
   }
 }

 printf("Even = %d\n",even);
 printf("Odd = %d",odd);

 return 0;
}