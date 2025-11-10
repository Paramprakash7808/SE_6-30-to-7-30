#include<stdio.h>
#include<conio.h>
void main()
{
    int temp,num1 = 10,num2 = 20;
    
    printf("Before Swapping Values Num1 = %d ,Num2 = %d", num1,num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nAfter Swapping Values Num1 = %d ,Num2 = %d", num1,num2);
    
    getch();
}