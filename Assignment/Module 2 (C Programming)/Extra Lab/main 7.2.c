// Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
// 153 = 1^3 + 5^3 + 3^3). 
// • Challenge: Write a program to find all Armstrong numbers between 1 and 1000. 

#include<stdio.h>
#include<conio.h>

void main() 
{
    int num, original, rem, sum, i;

    printf("Armstrong Numbers Between 1 and 1000 are: \n");

    for(i = 1; i <= 1000; i++) 
    {
        num = i;
        sum = 0;
        original = num;

        while(num > 0) 
        {
            rem = num % 10;               // get last digit
            sum = sum + (rem * rem * rem);
            num = num / 10;               // remove last digit
        }

        if(sum == original) 
        {
            printf("%d ", original);
        }
    }

    getch();
}