#include<stdio.h>
#include<conio.h>
int main()
{
   int a;
    printf("Enter a:");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        printf("JK");
        break;
        case 2:
        printf("Jenny");
        break;
        default:
        printf("bye%d");
    }
    printf("GO HOME");
    getch();
}