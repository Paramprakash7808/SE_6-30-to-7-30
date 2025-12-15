// Write a C program that counts the number of words in a sentence entered by the user. 

#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i, words = 1;   

    printf("Enter a Sentence: ");
    gets(str);   // simple input

    for(i = 0; str[i] != '\0'; i++) 
    {
        // A word ends when a space is found
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') 
        {
            words++;
        }
    }

    printf("Total Words are: %d\n", words);

    getch();
}