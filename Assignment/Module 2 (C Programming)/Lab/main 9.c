// Write a C program to demonstrate pointer usage. Use a pointer to modify the 
// value of a variable and print the result. 

#include<stdio.h>
#include<conio.h>
void main()
{
    int num = 100;
    int *p;
    
    p = &num;
    
    printf("Before Modifying Value is : %d", *p);
    
    *p = 102;
    
    printf("\nAfter Modifying Value is : %d", *p);
    
    getch();
}