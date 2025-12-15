// Write a C program that calculates the factorial of a given number using a function. 

#include<stdio.h>
#include<conio.h>

int factorial(int n) 
{
    int i, fact = 1;

    for (i = 1; i <= n; i++) 
    {
        fact = fact * i;  
    }

    return fact;
}

void main() 
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, factorial(num));

    getch();
}