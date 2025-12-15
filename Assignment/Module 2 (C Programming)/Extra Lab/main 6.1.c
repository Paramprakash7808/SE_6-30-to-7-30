// Write a C program that takes a string as input and reverses it using a function. 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverseString(char str[]) 
{
    int i, len;
    len = strlen(str);   // find string length

    printf("Reversed String is: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);    
    }
}

void main() 
{
    char str[100];

    printf("Enter a String: ");
    gets(str);   // simple input

    reverseString(str);

    getch();
}