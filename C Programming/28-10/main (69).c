#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[20], surname[20];
    
    
    printf("Enter a Name: ");
    scanf("%s", &name);
    
    printf("Enter a Surname: ");
    scanf("%s", &surname);
    
    printf("%s", strcat(name, surname));
    
    getch();
}