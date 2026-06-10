#include<stdio.h>

int main (){

int num,remainder,sum=0;

printf("enter a number:");
scanf("%d",&num);

while(num>0){
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
printf("sum of digits=%d\n",sum);
return 0;

}