// Write a C program that takes an integer input from the user and prints its multiplication 
// table using a for loop. 
// • Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, start, end, i;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter Starting Range: ");
    scanf("%d", &start);

    printf("Enter Ending Range: ");
    scanf("%d", &end);

    printf("\nMultiplication Table of %d from %d to %d:\n", num, start, end);

    for (i = start; i <= end; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    getch();
}