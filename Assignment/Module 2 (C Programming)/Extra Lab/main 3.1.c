//  Write a C program that checks whether a given number is a prime number or not using a for 
// loop. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1)
    {
        printf("\n%d is NOT a Prime Number.", num);
        return;   // Stop further execution
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;   // not prime
            break;
        }
    }

    if (flag == 0)
        printf("\n%d is a Prime Number.", num);
    else
        printf("\n%d is Not a Prime Number.", num);

    getch();
}