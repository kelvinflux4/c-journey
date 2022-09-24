#include<stdio.h>
#include<conio.h>
int main()
{
    int age , salary;
    printf("Enter age & salary:");
    scanf("%d%d", &age , &salary);
    if(age>50 && salary<60000)
    printf("salary%d\n", salary+5000);
    else
    { 
    printf("salary%d\n", salary+3000);
    }
    printf("End of program\n");
    getch();
}