//  Write a C program that takes a string from the user and counts the number of vowels and 
// consonants in the string. 

#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a String: ");
    gets(str);   // simple input

    for(i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

        // Check if it's a letter
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            // Check vowels
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
               {
                vowels++;
               } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);

    getch();
}