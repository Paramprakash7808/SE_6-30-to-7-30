// 8. Write a Program to check the given number is Positive, Negative.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    
    printf("Enter a Number:");
    scanf("%d", &num);
    
    if(num>=0)
    {
        printf("Positive");
    } else
    {
        printf("Negative");
    }
    
    getch();
}