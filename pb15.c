#include <stdio.h>
void table(int n)
{
    for(int i = 1;i<11;i++)
    {
        int sum = n * i;
        printf("%d * %d = %d\n",n,i,sum);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    table(num);
    return 0;
}