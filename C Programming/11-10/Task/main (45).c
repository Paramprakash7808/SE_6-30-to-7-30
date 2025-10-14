// 2. W.A.P which take a user input and print the reverse number of given number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,rev = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num>0) 
        {
            int rem = num%10; 
            rev = rev * 10 + rem; 
            num/=10; 
        }
    printf("Reversed Number is : %d",rev);
    
    getch();
}