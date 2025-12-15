//  Write a C program that takes the marks of a student as input and displays the corresponding 
// grade based on the following conditions: 
// o Marks > 90: Grade A 
// o Marks > 75 and <= 90: Grade B 
// o Marks > 50 and <= 75: Grade C 
// o Marks <= 50: Grade D 
// • Use if-else or switch statements for the decision-making process. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;

    printf("Enter Student Marks: ");
    scanf("%d", &marks);

    if(marks > 90)
    {
        printf("\nGrade A");
    }
    else if(marks > 75 && marks <= 90)
    {
        printf("\nGrade B");
    }
    else if(marks > 50 && marks <= 75)
    {
        printf("\nGrade C");
    }
    else if(marks <= 50)
    {
        printf("\nGrade D");
    }
    else
    {
        printf("\nInavalid Marks");
    }

    getch();
}
