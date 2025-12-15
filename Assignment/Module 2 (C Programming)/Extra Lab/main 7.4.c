// Write a C program that generates Pascal’s Triangle up to N rows using loops. 
// • Challenge: Implement the same program using a recursive function.

#include<stdio.h>
#include<conio.h>

// Recursive function to calculate C(n, k)
long long combination(int n, int k) 
{
    if (k == 0 || k == n)
        return 1;
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

void main() 
{
    int n, i, j;

    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        // Print spaces for alignment
        for(j = 0; j < n - i - 1; j++) 
        {
            printf(" ");
        }

        // Print coefficients in row
        for(j = 0; j <= i; j++) 
        {
            printf("%lld ", combination(i, j));
        }

        printf("\n");
    }

    getch();
}