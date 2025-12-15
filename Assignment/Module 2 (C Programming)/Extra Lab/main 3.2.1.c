// Write a C program that takes an integer input from the user and prints its multiplication 
// table using a for loop. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", num, i, num * i);
    }

    getch();
}
