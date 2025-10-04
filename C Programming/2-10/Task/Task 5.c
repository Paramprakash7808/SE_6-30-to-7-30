// 5. Write a program to find the Area of Triangle=0.5*a*b

#include <stdio.h>
#include <conio.h>

void main()
{
    float a,b,area;
    
    printf("Enter a base of the triangle:");
    scanf("%f", &a);
    
    printf("Enter a height of the triangle:");
    scanf("%f", &b);
    
    area = 0.5*a*b;
    printf("Area of Triangle is: %f", area);
    
    getch();
}