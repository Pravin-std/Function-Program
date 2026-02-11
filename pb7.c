#include <stdio.h>

void prime(int n)
{
    int flag = 1;
    for(int i= 2;i<n;i++)
    {
        if(n % i==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        printf("Prime Number");
    }else
    {
        printf("Not Prime Number");
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    prime(a);
}