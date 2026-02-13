#include <stdio.h>
void fibo(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    fibo(num);
    return 0;
}