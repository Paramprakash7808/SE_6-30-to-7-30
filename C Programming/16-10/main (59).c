#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,space = 0;
    
    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }
        
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    getch();
}