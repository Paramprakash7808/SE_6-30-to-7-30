// 3)
// 1)Write two small programs: one using Procedural Programming (POP) to calculate the 
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
// class and object for the same task. 

// using Procedural Programming (POP) (C Language)

#include<stdio.h>
#include<conio.h>
void main()
{
    float length,width,area;
    
    printf("Enter Length of Rectangle: ");
    scanf("%f", &length);

    printf("Enter Width of Rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("Area of Rectangle = %f", area);
    
    getch();
}