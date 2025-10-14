#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,sum,fdigit,ldigit = 0;
    
    printf("Enter a Number ");
    scanf("%d", &num);
    
    ldigit = num % 10;
    
    while(num > 0)
    {
        if(num > 9)
        {
            num /= 10;
        }
        else
        {
            fdigit = num;
            num /= 10;
        }
    }
    
    sum = fdigit + ldigit;
    printf("Sum of first and last digit is %d", sum);
    
    getch();
}