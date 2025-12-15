// Write a C program that takes a number as input and checks whether it is a palindrome using 
// a function. 
// • Challenge: Modify the program to check if a given string is a palindrome. 

#include<stdio.h>
#include<conio.h>
#include<string.h>

int isStringPalindrome(char str[]) 
{
    int i, j;

    i = 0;
    j = strlen(str) - 1;

    while (i < j) 
    {
        if (str[i] != str[j])
            return 0;   // not palindrome
        i++;
        j--;
    }

    return 1; // palindrome
}

void main() 
{
    char str[100];

    printf("Enter a String: ");
    scanf("%s", str);

    if (isStringPalindrome(str))
        printf("\n%s is a Palindrome String.", str);
    else
        printf("\n%s is Not a Palindrome String.", str);

    getch();
}