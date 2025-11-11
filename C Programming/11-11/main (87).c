#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[50];
}s1[50];

void main()
{
    int i,num;
    
    printf("Enter Number of Students: ");
    scanf("%d", &num);
    
    for(i = 0; i < num; i++)
    {
        printf("Enter Your Id: ");
        scanf("%d", &s1[i].id);
        
        printf("Enter Your Namr: ");
        scanf("%s", &s1[i].name);
    }
    
    for(i = 0; i < num; i++)
    {
        printf("\nYour Id is: %d", s1[i].id);
        printf("\nYour Name is: %s", s1[i].name);
    }
    
    getch();
}