#include <stdio.h>
void gcd(int n1, int n2)
{
    int min = 0;
    int hcf = 0;
    if(n1 < n2)
    {
        min = n1;
    }else
    {
        min = n2;
    }
    for(int i = 1;i<min;i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("gcd = %d", hcf);
}
int main()
{
    int num1,num2;
    scanf("%d %d",&num1, &num2);
    gcd(num1, num2);
    return 0;
}