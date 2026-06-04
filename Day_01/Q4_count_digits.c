#include<stdio.h>
int main (){

    int n;
    int total=0;

    printf("enter number:");
    scanf("%d",&n);

    if (n == 0){
        printf("digit count:1\n");
        return 0;
    }

if(n<0){
    n=-n;
}
while(n>0){
    total=total+1;
    n=n/10;
}

printf("digit count: %d\n",total);
return 0;
}