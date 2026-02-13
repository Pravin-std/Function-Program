#include <stdio.h>

void sum(int num)
{
    int sum = 0;
    int i;
    for(i=1;i<=num;i++)
    {
        sum +=i;
    }
    printf("%d", sum);
}

int main()
{
    int num;
    scanf("%d",&num);
    sum(num);
}