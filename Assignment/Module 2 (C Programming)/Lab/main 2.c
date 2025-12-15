// 2)Write a C program that includes variables, constants, and comments. Declare 
// and use different data types (int, char, float) and display their values.

#include<stdio.h>
#include<conio.h>
void main()
{
    int i = 10; // variable Declare
    printf("Variable: %d", i); //Print Values
    
    const int x = 78; //constant Declare
    printf("\nConstant: %d", x); //Print Values
    
    // This is single line comment
    
    /*This
    is 
    multi
    line 
    comment*/
    
    int marks = 95;
    printf("\nInt: %d", marks);
    
    char c = 'P';
    printf("\nCharacter: %c", c);
    
    float f = 7.8;
    printf("\nFloat: %f", f);
    
    getch();
}