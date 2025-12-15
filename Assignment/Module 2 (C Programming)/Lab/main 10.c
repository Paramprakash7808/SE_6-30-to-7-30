// Write a C program that takes two strings from the user and concatenates them 
// using strcat(). Display the concatenated string and its length using 
// strlen(). 

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[20],surname[20];
    
    printf("Enter Your Name: ");
    scanf("%s", &name);
    
    printf("Enter Your Surname: ");
    scanf("%s", &surname);
    
    printf("Concatenated String is: %s", strcat(name,surname));
    printf("\nString Length is: %d", strlen(name));
    
    return 0;
}