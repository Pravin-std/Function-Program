#include <stdio.h>

void reverse(int num)
{
    int rev = num;
    int res = 0;
    while(num !=0)
    {
        int temp = num % 10;
        res = res * 10 + temp;
        num = num/10;
    }
    printf("%d",res);
    

}







int main()
{
    int num;
    scanf("%d", &num);
    reverse(num);
}