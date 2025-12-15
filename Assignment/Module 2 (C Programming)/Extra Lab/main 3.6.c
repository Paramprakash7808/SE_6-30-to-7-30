// Write a C program that takes an integer from the user and calculates the sum of its digits 
// using a while loop. 
// • Challenge: Extend the program to reverse the digits of the number. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,digit,sum = 0,reverse = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    int original = num;   // store for printing

    while (num > 0)
    {
        digit = num % 10;          // get last digit
        sum += digit;              
        reverse = reverse * 10 + digit;  
        num = num / 10;            // remove last digit
    }

    printf("\nSum of digits of %d: %d", original, sum);
    printf("\nReverse of %d: %d", original, reverse);

    getch();
}