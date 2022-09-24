#include <stdio.h>
int main (void)
{
    int y = 10;
    int  x = 11;
    int sum = y + x;
    int sum_pre = ++x + y;
    int sum_post = x++ +y;

    printf("The value of x is :%d\n", x);
    printf("The value of y is :%d\n", y);
    printf("The sum is :%d\n",sum);
    printf("The sum_pre is: %d\n", sum_pre);
    printf("The sum_post is : %d\n", sum_post);
    return (0);


    

}