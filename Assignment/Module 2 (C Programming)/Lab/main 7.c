// Write a C program that calculates the factorial of a number using a function. 
// Include function declaration, definition, and call. 

#include<stdio.h>
#include<conio.h>

void fact(); // Function Declaration

void fact() // Function Definition
{
    int i,num,ans = 1;
    
    printf("Enter a Number For a Factorial: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++)
    {
        ans = ans * i;
    }
    printf("Factorial Of a %d is %d", num,ans);
    
    getch();
}

void main()
{
    fact(); // Function Call
    
    getch();
}