#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter Your Age:");
    scanf("%d", &age);
    
    if(age>= 18)
    {
        printf("Eligible to Vote");
    }
    else
    {
        printf("Not Eligible to Vote");
    }
    
    getch();
    
}