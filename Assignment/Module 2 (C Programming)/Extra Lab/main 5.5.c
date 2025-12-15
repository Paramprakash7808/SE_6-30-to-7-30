// Write a C program that takes a number as input and checks whether it is a palindrome using 
// a function. 

#include<stdio.h>
#include<conio.h>

int isPalindrome(int num) 
{
    int original = num;
    int reversed = 0;
    int digit;

    while (num > 0) 
    {
        digit = num % 10;            // get last digit
        reversed = reversed * 10 + digit; 
        num = num / 10;             // remove last digit
    }

    if (original == reversed)
        return 1;   // Palindrome
    else
        return 0;   // Not Palindrome
}

void main() 
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("\n%d is a Palindrome.", num);
    else
        printf("\n%d is NOT a Palindrome.", num);

    getch();
}