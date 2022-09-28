#include<stdio.h>
#include<conio.h>
void sub()
{
  int a, b, sub=0;
    printf("Enter two numbers:");
    scanf("%d%d:",&a,&b);
    sub=a-b;
    printf("sub:%d\n", sub);  
}
void sum()
{
    int a, b, sum=0;
    printf("Enter two numbers:");
    scanf("%d%d:",&a,&b);
    sum=a+b;
    printf("sum:%d\n", sum);
}

void main()
{
    sum();
    printf("Hello\n");
    sum();
    sum();
    sub();
    printf("Hello\n");
    sub();
}