// Write a C program to print numbers from 1 to 10 using all three types of loops 
// (while, for, do-while). 

#include<stdio.h>
#include<conio.h>
void main()
{
    // While Loop
    int i = 1;
    while(i <= 10)
    {
        printf("\nUsing While Loop: %d", i);
        i++;
    }
    
    // For Loop
    for(int i = 1; i <= 10; i++)
    {
        printf("\nUsing For Loop: %d",i);
    }
    
    // do-while Loop
    i = 1;
    do
    {
        printf("\nUsing do-while Loop: %d", i);
        i++;
    }
    while(i <= 10);
    
    getch();
}