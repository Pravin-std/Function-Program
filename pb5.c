#include <stdio.h>

void sum(int a)
{
    int sum  = 0;
    while(a!=0)
    {
        int temp = a%10;
        sum += temp;
        a =  a/10;

    }
    printf("%d",sum);
}

int main()
{
    int a;
    scanf("%d", &a);
    sum(a);
}