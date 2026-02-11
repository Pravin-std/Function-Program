#include <stdio.h>

void factorial(int n)
{
    int fact = 1;
    for(int i = 1;i<=n;i++)
    {
        fact *= i;
    }
    printf("%d",fact);
}

int main()
{
    int a;
    scanf("%d", &a);
    factorial(a);
}