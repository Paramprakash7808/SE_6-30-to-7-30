// 9. Write a Program to check the given year is leap year or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    
    int year;
    
    printf("Enter a Year: ");
    scanf("%d", &year);
    
    if(year %4== 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        printf("%d is not Leap Year", year);
    }
    
    getch();
}