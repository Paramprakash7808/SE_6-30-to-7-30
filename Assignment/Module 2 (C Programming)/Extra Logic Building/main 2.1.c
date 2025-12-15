// Write a C program that generates Pascal’s Triangle up to N rows using loops. 

#include<stdio.h>
#include<conio.h>

void main() 
{
    int n, i, j;
    long long coeff;

    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        coeff = 1;

        // Print spaces for alignment
        for(j = 0; j < n - i - 1; j++) 
        {
            printf(" ");
        }

        // Print values in row
        for(j = 0; j <= i; j++) 
        {
            printf("%lld ", coeff);
            coeff = coeff * (i - j) / (j + 1);  // calculate next coefficient
        }

        printf("\n");
    }

    getch();
}