#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][2],b[2][3],c[3][2],j,i,k, sum;
    printf("enter element of matrix a:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter element of matrix b:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(a[i]!=b[j])
    {
       printf("cannot multiply:\n");
    }
    else
    { 
        printf("matrix c:\n");
        for(i=0; i<2; i++)
            {
                for(j=0; j<3; j++)
                    {
                    sum=0;
                    for(k=0; k<3; k++)
                        {
                            c[i][j]=sum+a[i][k]*b[k][j];
                        }
                        printf("%d\t", c[i][j]);
                    }
                printf("\n");
            }
    }
}