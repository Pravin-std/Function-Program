#include <stdio.h>

void perfect(int n)
{
    int sum = 0;
    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum +=i;
        }
    }
   if(n==sum)
   {
    printf("Perfect Number");
   }else
   {
    printf("Not Perfect Number");
   }
}

int main()
{
    int num;
    scanf("%d",&num);
    perfect(num);
    return 0;
}