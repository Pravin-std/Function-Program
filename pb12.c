#include <stdio.h>

void leapyear(int num)
{
    if((num % 400 == 0) || (num % 4 == 0 && num % 100 !=0))
    {
        printf("Leap Year");
    }else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int year;
    scanf("%d", &year);
    leapyear(year);
}