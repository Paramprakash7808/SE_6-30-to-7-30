#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your Marks:");
    scanf("%d", &marks);
    
    if(marks >= 70)
    {
        printf("\n A Grade");
    }
    if(marks >= 60)
    {
        printf("\n B Grade");
    }
    if(marks >= 50)
    {
        printf("\n C Grade");
    }
    if(marks >= 40)
    {
        printf("\n D Grade");
    }
    else
    {
        printf("\n Fail");
    }
    
    getch();
    
}