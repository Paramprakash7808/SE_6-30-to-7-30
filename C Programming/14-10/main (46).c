#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num,rem,rev = 0;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    while(num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    printf("Reversed Number is %d", rev);
    
    getch();
}