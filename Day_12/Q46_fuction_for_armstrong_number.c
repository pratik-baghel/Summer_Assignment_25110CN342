#include <stdio.h>

int armstrong(int n)
{
    int sum = 0,rem,temp =n;

    while(temp>0)
    {
        rem = temp % 10;
        sum += rem *rem *rem;
        temp /= 10;
    }
    return sum == n;
}

    int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong number");
    else
        printf("Not Armstrong number");

    return 0;
}