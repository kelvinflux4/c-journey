#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);
    if(a)
    printf("Inside if block");
    printf("Out of if block");
    getch();
}