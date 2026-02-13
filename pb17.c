#include <stdio.h>
void armstrong(int n)
{
    int arm = n;
    int res = 0;
    while(n !=0)
    {
        int temp = n % 10;
        res += temp * temp * temp;
        n = n/10;
    }
   if(res==arm)
   {
    printf("Armstrong");
   }else
   {
    printf("Not Armstrong");
   }
}
int main()
{
    int num;
    scanf("%d", &num);
    armstrong(num);
    return 0;
}