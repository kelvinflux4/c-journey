#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if(marks>80)
    printf("GRADE A\n");
    else if(marks>70)
    printf("GRADE B\n");
    else 
        if(marks>60)
        { 
            printf("GRADE C\n");
        }
    else
    printf("GRADE D\n");
    printf("End of program\n");
    getch();
}