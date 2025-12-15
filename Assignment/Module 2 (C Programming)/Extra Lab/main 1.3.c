// Write a C program that takes an integer from the user and checks the following using 
// different operators: 
// o Whether the number is even or odd. 
// o Whether the number is positive, negative, or zero. 
// o Whether the number is a multiple of both 3 and 5. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    printf("Enter an Integer: ");
    scanf("%d", &num);

    // For even or odd
    if(num % 2 == 0)
        printf("\n%d is Even", num);
    else
        printf("\n%d is Odd", num);

    // For positive, negative, or zero
    if(num > 0)
        printf("\n%d is Positive", num);
    else if(num < 0)
        printf("\n%d is Negative", num);
    else
        printf("\nThe Number is Zero");

    // For multiple of both 3 and 5
    if(num % 3 == 0 && num % 5 == 0)
        printf("\n%d is a Multiple of Both 3 and 5", num);
    else
        printf("\n%d is Not a Multiple of Both 3 and 5", num);

    getch();
}