// Write a C program that takes an integer from the user and calculates the sum of its digits 
// using a while loop. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,digit,sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;   // Get last digit
        sum += digit;       
        num = num / 10;     // Remove last digit
    }

    printf("\nSum of Digits is: %d", sum);

    getch();
}