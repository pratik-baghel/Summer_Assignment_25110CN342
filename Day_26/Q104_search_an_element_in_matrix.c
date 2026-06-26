#include<stdio.h>

int main()
{
 int a[10][10];
 int r,c,i,j,num;
 int flag=0;

 printf("Enter rows and column : ");
 scanf("%d%d",&r,&c);

 for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
 }

 printf("Enter element : ");
 scanf("%d",&num);

 for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    {
       if(a[i][j]==num)
       {
          printf("Found at Row %d Column %d",i+1,j+1);
          flag=1;
       }
    }
 }

 if(flag==0)
    printf("Element Not Found");

 return 0;
}