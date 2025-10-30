// 2.factorial -> function

#include<stdio.h>
#include<conio.h>

int fact()
{
    int i,num,factorial = 1;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    
    printf("Factorial of %d is %d", num,factorial);
    
    return 0;
}

void main()
{
    fact();
    
    getch();
}