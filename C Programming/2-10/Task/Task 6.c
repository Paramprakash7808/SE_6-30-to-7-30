// 6. Write a program to find the simple Interest.

#include <stdio.h>
#include <conio.h>
void main()
{
    int princi,year;
    float roi;
    
    printf("Enter Principle: ");
    scanf("%d", &princi);
    
    printf("Enter No. of Year: ");
    scanf("%d", &year);
    
    printf("Enter Rate of Interest: ");
    scanf("%f", &roi);
    
    float intrest = princi*roi*year/100;
    float total = princi + intrest;
    printf("Total Amount is %f", total);
    
    getch();
}