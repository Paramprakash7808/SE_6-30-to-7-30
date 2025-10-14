#include<stdio.h>
#include<conio.h>
void main()
{
    
    int age;
    
    printf("Enter Your Age: ");
    scanf("%d", &age);
    
    if (age >= 18)
    {
        printf("\nEligible to vote");
        if (age >= 60)
        {
            printf("\nSenior Citizen");
        }
        else
        {
            printf("\nYoung Age");
        }
    }
    else
    {
        printf("\nNot Eligible to vote");
    }
    
    getch();
}