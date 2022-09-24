#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    if(!age)
    {
        printf("Your age is : %d\n", age);
        printf("You can go coffe with me\n");
    }
    printf("Its time to go home");
    getch();
}