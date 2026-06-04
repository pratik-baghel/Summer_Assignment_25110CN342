#include <stdio.h>

int main(){
    int n, sum=0;
    printf("enter a positive integer N:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum+= i;

    }
printf("the sum of the first %d natural number is:%d\n",n,sum);

return 0;

}
