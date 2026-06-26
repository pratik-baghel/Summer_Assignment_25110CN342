#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j;
 int p=0,n=0;

 printf("Enter rows and columns: ");
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
       if(a[i][j]>=0)
          p++;

       else
          n++;
    }
 }

 printf("Positive = %d\n",p);
 printf("Negative = %d",n);

 return 0;
}