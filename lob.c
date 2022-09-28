#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);
    if(age>25 && age<30)
    { 
        printf("Age is : %d\n", age);
        printf("coffe with me\n");
    }
    else
    { 
        printf("age %d\n", age);
    }
    printf("out of if else");
    getch();
}