// Write a C program that checks whether a given number is a prime number or not using a for 
// loop. 
// • Challenge: Modify the program to print all prime numbers between 1 and a given number.

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i, j, flag;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Prime Numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++)  
    {
        flag = 0;

        for (j = 2; j <= i/2; j++)   
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);
    }

    getch();
}