#include <stdio.h>

void digit(int num)
{
    int count = 0;
    while(num !=0)
    {
        int temp = num % 10;
        if(temp >=0 && temp <=9)
        {
            count++;
        }
        num = num / 10;
    }
     printf("%d",count);
    
}


int main()
{
    int num;
    scanf("%d", &num);
    digit(num);
}