#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j;
 int sum=0;
 float avg;

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
       sum=sum+a[i][j];
    }
 }

 avg=(float)sum/(r*c);

 printf("Average = %.2f",avg);

 return 0;
}