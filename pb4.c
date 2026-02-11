#include <stdio.h>
 void area(int a)
 {
    float res = 3.14 * a * a;
    printf("%.2f",res);
 }

 int main()
 {
    int a;
    scanf("%d",&a);
    area(a);
 }