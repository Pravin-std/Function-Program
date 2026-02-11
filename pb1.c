#include <stdio.h>


void res(int a, int b, int c)
{
    float d = (a * b * c) / 100;
    printf("%.2f",d);
}


int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    res(a, b, c);
}