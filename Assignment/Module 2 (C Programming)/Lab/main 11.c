// Write a C program that defines a structure to store a student's details (name, 
// roll number, and marks). Use an array of structures to store details of 3 
// students and print them.

#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int number;
    int marks;
};

int main()
{
    struct student s[3];
    
    for(int i = 0; i < 3; i++)
    {
        printf("Enter Your Name: ");
        scanf("%s", &s[i].name);
    
        printf("Enter Your Roll Number: ");
        scanf("%d", &s[i].number);
    
        printf("Enter Your Marks: ");
        scanf("%d", &s[i].marks);
    }
    
    for(int j = 0; j < 3; j++)
    {
        printf("\nYour Name is: %s", s[j].name);
        printf("\nYour Roll Number is: %d", s[j].number);
        printf("\nYour Marks is: %d", s[j].marks);
    }
    
    return 0;
} 