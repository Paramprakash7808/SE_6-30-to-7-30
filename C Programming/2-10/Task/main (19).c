// 2. Write a program to make addition, Subtraction, Multiplication and Division of
// Two Numbers.[User input]

#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nAddition is: %d", a+b);
    printf("\nSubtraction is: %d", a-b);
    printf("\nMultiplication is: %d", a*b);
    printf("\nDivision is: %d", a/b);
    
    getch();
}