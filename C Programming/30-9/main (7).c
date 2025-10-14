#include <stdio.h>
#include <conio.h>
void main()
{
    int princi = 65000;
    int year = 2;
    float roi = 6.5;
    
    float intrest = princi*roi*year/100;
    float total = princi + intrest;
    printf("Total Amount is %f", total);
    
    getch();
    
}