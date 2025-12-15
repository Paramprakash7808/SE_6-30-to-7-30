// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
// resultant matrix. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;

    printf("\nEnter Elements of First 2x2 Matrix: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter Elements of Second 2x2 Matrix: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding Both Matrices
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    getch();
}