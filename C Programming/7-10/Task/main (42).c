// Task 2:
// factorial-> 5!=120

#include<stdio.h>
#include<conio.h>
void main()
    
    {
        
        int i,num,ans = 1;
        
        printf("Enter a Number for factorial: ");
        scanf("%d", &num);
        
        
        for(i = 1; i <= num; i++)
        {
            ans = ans * i;
        }
        
        printf("\nFactorial of %d is: %d", num,ans);
        
        getch();
    }