#include<stdio.h>
int main(){
    int n, reversed=0,original;

    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n>0){
        reversed=(reversed*10)+(n%10);
        n/=10;


    }
    if(original==reversed)
    printf("palindrome\n");
    else
    printf("not palindrome\n");

    return 0 ;

}
