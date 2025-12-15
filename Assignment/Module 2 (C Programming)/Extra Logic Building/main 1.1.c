// Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
// 153 = 1^3 + 5^3 + 3^3).

#include<stdio.h>
#include<conio.h>

void main() 
{
    int num, original, rem, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) 
    {
        rem = num % 10;                 // get last digit
        sum = sum + (rem * rem * rem);  
        num = num / 10;                 // remove last digit
    }

    if (sum == original)
        printf("\n%d is an Armstrong Number.", original);
    else
        printf("\n%d is Not an Armstrong Number.", original);

    getch();
}