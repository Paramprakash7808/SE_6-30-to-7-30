// 3)Write a C program that accepts two integers from the user and performs 
// arithmetic, relational, and logical operations on them. Display the results. 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,b,num2;
    
    printf("Enter First Number: ");
    scanf("%d", &i);
    
    printf("Enter Second Number: ");
    scanf("%d", &j);
    
    // Arithmetic Operations
    int add = i + j;
    printf("\nAddition is: %d", add);
    
    int sub = i - j;
    printf("\nSubtraction is: %d", sub);
    
    int mul = i * j;
    printf("\nMultiplication is: %d", mul);
    
    int div = i / j;
    printf("\nDivision is: %d", div);
    
    int mod = i % j;
    printf("\nModules is: %d", mod);
    
    // Relational Operations
    if(i == j)
    {
        printf("\n%d is Equal to %d", i,j);
    }
    else if(i != j)
    {
        printf("\n%d is Not Equal to %d", i,j);
    }
    else if(i < j)
    {
        printf("\n%d is Less than %d", i,j);
    }
    else if(i > j)
    {
        printf("\n%d is Greater than %d", i,j);
    }
    else if(i <= j)
    {
        printf("\n%d is Less than Equal to %d", i,j);
    }
    else if(i >= j)
    {
        printf("\n%d is Greater than Equal to %d", i,j);
    }
    else
    {
        printf("Not From Relational Operations");
    }
    
    // // logical Operations
    // if(a<5 && b<5)
    // {
    //     printf("A and B is less than 5");
    // }
    // else if(a<5 || b<5)
    // {
    //     printf("A or B is less than 5");
    // }
    // else if(a<5 ! b<5)
    // {
    //     printf("A is not B and less than 5");
    // }
    // else
    // {
    //     printf("Error");
    // }
    
    // logical Operations
    if(a<10 & b<10)
    {
        printf("\nA and b is less than 10");
    }
    else if(a<5 || b>5)
    {
        printf("\nA or b is less than 5");
        
        printf("\ndo you want to check exact op: press 1 ");
        scanf("%d",&num2);
        
        if(num2==1)
        {
            if(a<10)
            {
                printf("a is less than 10");
            }
            if(b<5)
            {
                printf("\nb is less than 10");
            }
            else
            {
                printf("\nError");
            }
        }
        else
        {
            printf("\nExit");
        }
    }
    getch();
}