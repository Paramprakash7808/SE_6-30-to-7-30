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
    int id;
    struct address add;
}s1;

void main()
{
    printf("Enter Your Id: ");
    scanf("%d", &s1.id);
    
    printf("Enter Your Name: ");
    scanf("%s", &s1.name);
    
    printf("Enter Your City: ");
    scanf("%s", &s1.add.city);
    
    printf("Enter Your ZipCode: ");
    scanf("%d", &s1.add.zip);
    
    printf("\nYour Id is: %d", s1.id);
    printf("\nYour Name is: %s", s1.name);
    printf("\nYour City is: %s", s1.add.city);
    printf("\nYour ZipCode is: %d", s1.add.zip);
    
    getch();
}
