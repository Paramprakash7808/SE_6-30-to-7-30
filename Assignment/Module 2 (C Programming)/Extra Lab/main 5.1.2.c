// Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
// function. 
// • Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
// and recursive methods. Compare their efficiency.

#include<stdio.h>
#include<conio.h>

// Recursive Fibonacci
int fib_recursive(int n) 
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// Iterative Fibonacci (faster)
int fib_iterative(int n) 
{
    int a = 0, b = 1, c, i;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    for (i = 2; i <= n; i++) 
    {
        c = a + b;  // next term
        a = b;
        b = c;
    }
    return b;
}

void main() 
{
    int n;

    printf("Enter N to find Nth Fibonacci Number: ");
    scanf("%d", &n);

    printf("\nRecursive Method Result = %d", fib_recursive(n));
    printf("\nIterative Method Result = %d", fib_iterative(n));

    printf("\n\nEfficiency:");
    printf("\nRecursive = Slow (repeats work many times)");
    printf("\nIterative = Fast (single loop)");

    getch();
}