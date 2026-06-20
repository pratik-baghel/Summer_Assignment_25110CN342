#include<stdio.h>

int main()
{
 int a[100],n,i,pos,num;

 printf("Enter size : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }

 printf("Enter position : ");
 scanf("%d",&pos);

 printf("Enter element : ");
 scanf("%d",&num);

 for(i=n;i>=pos;i--)
 {
   a[i]=a[i-1];
 }

 a[pos-1]=num;

 n++;

 printf("Array after insertion : ");

 for(i=0;i<n;i++)
 {
   printf("%d ",a[i]);
 }

 return 0;
}