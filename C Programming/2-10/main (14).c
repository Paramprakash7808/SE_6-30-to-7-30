#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter Any Number:");
    scanf("%d", &num);
    
    if(num > 0)
    {
        printf("%d is Positive", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative", num);
    }
    else
    {
        printf("Zero");
    }
    
    getch();
    
}