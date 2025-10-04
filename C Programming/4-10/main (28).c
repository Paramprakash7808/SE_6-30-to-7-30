#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num;
    
    printf("\n Enter any number \n Press 1 for Gujarati \n Press 2 for Hindi \n Press 3 for English");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1: printf("Press 1 for Gujarati");
        break;
        
        case 2: printf("Press 2 for Hindi");
        break;
        
        case 3: printf("Press 3 for English");
        break;
        
        default: printf("Entered Number is not valid");
        break;
    }
    
    getch();
}