#include<stdio.h>
#include<conio.h>
struct address
{
    char city[50];
    int zip;
};

struct student
{
    char name[50];
    int age;
    struct address add;
}s1;

void main()
{
    printf("\nEnter Your Name: ");
    scanf("%s",&s1.name);
    
    printf("\nEnter Your Age: ");
    scanf("%d",&s1.age);
    
    printf("\nEnter Your City: ");
    scanf("%s",&s1.add.city);
    
    printf("\nEnter Your ZipCode: ");
    scanf("%d",&s1.add.zip);
    
    printf("\nYour Name is: %s", s1.name);
    printf("\nYour Age is:%d", s1.age);
    printf("\nYour City is:%s", s1.add.city);
    printf("\nYour ZipCode is:%d", s1.add.zip);
    
    if(s1.age >= 18)
    {
        printf("\nYou are Eligible to Vote.");
    }
    else
    {
        printf("\nYou are Not Eligible to Vote.");
    }
    
    getch();
}