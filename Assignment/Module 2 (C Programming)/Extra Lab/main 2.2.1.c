// Write a C program that takes three numbers from the user and determines: 
// o The largest number. 
// o The smallest number. 

// Using if-else 
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;

    printf("Enter First Number: ");
    scanf("%d", &a);
    
    printf("Enter Second Number: ");
    scanf("%d", &b);
    
    printf("Enter Third Number: ");
    scanf("%d", &c);

    // For largest Number
    int largest;
    if(a > b && a > c)
        largest = a;
    else if(b > a && b > c)
        largest = b;
    else
        largest = c;

    // For Smallest Number
    int smallest;
    if(a < b && a < c)
        smallest = a;
    else if(b < a && b < c)
        smallest = b;
    else
        smallest = c;

    printf("\nLargest Number is: %d", largest);
    printf("\nSmallest Number is: %d", smallest);

    getch();
}