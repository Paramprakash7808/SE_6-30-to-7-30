// Write a C program that takes a string as input and reverses it using a function. 
// • Challenge: Write the program without using built-in string handling functions. 

#include<stdio.h>
#include<conio.h>

void reverseString(char str[]) 
{
    int i, len = 0;

    // Count length manually
    while(str[len] != '\0') {
        len++;
    }

    printf("Reversed String is: ");
    for(i = len - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
}

void main() 
{
    char str[100];

    printf("Enter a String: ");
    gets(str); // simple input

    reverseString(str);

    getch();
}