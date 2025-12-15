// Write a C program that calculates the factorial of a given number using a function. 
// • Challenge: Implement both an iterative and a recursive version of the factorial function and 
// compare their performance for large numbers. 

#include<stdio.h>
#include<conio.h>

// Iterative factorial (fast)
int factorial_iterative(int n) 
{
    int i, fact = 1;

    for (i = 1; i <= n; i++) 
    {
        fact = fact * i;
    }

    return fact;
}

// Recursive factorial (slow for large numbers)
int factorial_recursive(int n) 
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

void main() 
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("\nIterative Factorial = %d", factorial_iterative(num));
    printf("\nRecursive Factorial = %d", factorial_recursive(num));

    printf("\n\nEfficiency Comparison:");
    printf("\nIterative → Faster (Simple Loop)");
    printf("\nRecursive → Slower (Many Function Calls)");

    getch();
}