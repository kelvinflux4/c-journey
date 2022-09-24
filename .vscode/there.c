#include <stdio.h>
int main ()
{
    float a= 1234.3456;
    printf("The sum is: %5.2f\n", a);
    {
    int a=5 , b=9 , sum;
    sum=a+b;
    printf("The sum is: %4d\n", sum);
    }
    return (0);
}