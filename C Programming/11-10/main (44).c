#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num, max = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        int rem = num % 10;
        
        if(rem > max)
        {
            max = rem;
        }
        
        num/=10;
        
    }
    
    printf("Biggest Number is: %d", max);
    
    getch();
}