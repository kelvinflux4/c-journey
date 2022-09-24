#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,b,sum,sub,div,mul;
    char operator;
    printf("Enter operator:\n");
    scanf("%c", &operator);
    printf("Enter operand:");
    scanf("%d%d", &a ,&b);
    switch(operator)
    {
        case '+':sum=a+b;
                printf("sum:%d", sum);
                break;
        case '-':sub=a-b;
                printf("sub:%d", sub);
                break;
        case '*':mul=a*b;
                printf("mul:%d", mul);
                break;
        case '/':div=a/b;
                printf("div:%d", div);
                break;
        default: 
                printf("Enter valid operater");
    }
getch();
}