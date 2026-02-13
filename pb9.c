#include <stdio.h>

void palindrome(int num)
{
    int rev = num;
    int res = 0;
    while(num !=0)
    {
        int temp = num % 10;
        res = res * 10 + temp;
        num = num / 10;
    }
    if(rev==res)
    {
        printf("Palindrome");
    }else
    {
        printf("Not Palindrome");
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    palindrome(num);
}