#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        int rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    
    printf("Sum of all digits is %d", sum);
    
    getch();
}