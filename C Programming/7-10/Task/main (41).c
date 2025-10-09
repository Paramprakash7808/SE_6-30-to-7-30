// Task 1:
// userinput-> between 1 to 100
// random number set

// luckynum=67

// Enter Lucky Number between 1 to 100
// 55 -> try with higher number
// 99-> try with lower number
// 60->try with higher number
// 67->congratulations you guessed the number
// Maximum try available for 5 times-> Game Over

#include<stdio.h>
#include<conio.h>
void main()
{
    
    int i,num;
    int luckynum = 78;
    int attempt = 0;
    
    do
    {
        printf("\nEnter a Number: ");
        scanf("%d", &num);
        attempt++;
        
        if(num == luckynum)
        {
            printf("Congratulations You Guessed the Right Number");
            break;
        }
        else if(num > luckynum)
        {
            printf("Try with Lower Number");
        }
        else
        {
            printf("Try with Higher Number");
        }
        
        if(attempt == 5)
        {
            printf("\nGame Over");
        }
        
    } 
    while(attempt < 5);
    
    getch();
}