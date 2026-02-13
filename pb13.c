#include <stdio.h>

int power(int num1, int num2)
{
    int res = 1;
    int i;
    for(i=1;i<=num2;i++)
    {
        res = res * num1;
    }
    return printf("%d",res);
}

int main()
{
    int num1, num2;
    scanf("%d %d",&num1 , &num2);
    power(num1,num2);
}