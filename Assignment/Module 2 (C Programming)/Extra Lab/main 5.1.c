// Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
// function. 

#include<stdio.h>
#include<conio.h>

// Recursive function for Fibonacci
int fib(int n) 
    {
        if (n == 0)
            return 0;          // first term
        if (n == 1)
            return 1;          // second term
        return fib(n - 1) + fib(n - 2);   // recursive relation
    }

void main() {
    int n, i;

    printf("Enter Number of Terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Sequence:");
    for (i = 0; i < n; i++) 
        {
            printf("%d ", fib(i));
        }

    getch();
}