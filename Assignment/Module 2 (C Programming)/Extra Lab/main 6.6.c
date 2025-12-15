//  Write a C program that counts the number of words in a sentence entered by the user. 
// • Challenge: Modify the program to find the longest word in the sentence.

#include<stdio.h>
#include<conio.h>

void main() 
{
    char str[200];
    int i, words = 1, count = 0, maxLen = 0;
    char longest[50], temp[50];
    int tIndex = 0, lIndex = 0;

    printf("Enter a Sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        // Counting words
        if (str[i] == ' ') 
        {
            words++;

            // Finish current word and compare
            temp[tIndex] = '\0';
            if (tIndex > maxLen) 
            {
                maxLen = tIndex;
                for (lIndex = 0; lIndex <= tIndex; lIndex++)
                    longest[lIndex] = temp[lIndex];
            }
            tIndex = 0; // reset for next word
        }
        else 
        {
            temp[tIndex] = str[i];
            tIndex++;
        }
    }

    // Handle last word also
    temp[tIndex] = '\0';
    if (tIndex > maxLen) 
    {
        maxLen = tIndex;
        for (lIndex = 0; lIndex <= tIndex; lIndex++)
            longest[lIndex] = temp[lIndex];
    }

    printf("\nTotal Words: %d", words);
    printf("\nLongest Word: %s", longest);

    getch();
}