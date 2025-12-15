// Write a C program that takes a string from the user and counts the number of vowels and 
// consonants in the string. 
// • Challenge: Extend the program to also count digits and special characters. 

#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a String: ");
    gets(str);   // simple input 

    for(i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

        // Check vowels
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
           {
            vowels++;
           }
        // Check consonants 
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            consonants++;
        }
        // Check digits
        else if(ch >= '0' && ch <= '9') 
        {
            digits++;
        }
        // Special characters
        else 
        {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d", special);

    getch();
}