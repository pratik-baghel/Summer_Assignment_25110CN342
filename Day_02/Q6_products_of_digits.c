#include<stdio.h>
int main (){
    int num,remainder;
    int product=1;

    printf("enter a number:");
    scanf("%d",&num);

    if(num==0){
        product=0;
    }
    while(num>0){
        remainder=num%10;
        product=product*remainder;
        num=num/10;

    }
    printf("products of digits:%d\n",product);
    return 0;
}