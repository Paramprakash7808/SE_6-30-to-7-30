// Write a C program that takes three numbers from the user and determines: 
// o The largest number. 
// o The smallest number. 
// • Challenge: Solve the problem using both if-else and switch-case statements. 

// Using if-else and Switch Case both
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;
    int largest, smallest;

    printf("Enter First Number: ");
    scanf("%d", &a);
    
    printf("Enter Second Number: ");
    scanf("%d", &b);
    
    printf("Enter Third Number: ");
    scanf("%d", &c);

    // For largest Number
    if(a >= b && a >= c)
        largest = 1;
    else if(b >= a && b >= c)
        largest = 2;
    else
        largest = 3;

    // For Smallest Number
    if(a <= b && a <= c)
        smallest = 1;
    else if(b <= a && b <= c)
        smallest = 2;
    else
        smallest = 3;

    // Switch-case to print largest
    switch(largest)
    {
        case 1: printf("\nLargest Number is: %d", a); 
        break;
        
        case 2: printf("\nLargest Number is: %d", b); 
        break;
        
        case 3: printf("\nLargest Number is: %d", c); 
        break;
    }

    // Switch-case to print smallest
    switch(smallest)
    {
        case 1: printf("\nSmallest Number is: %d", a); 
        break;
        
        case 2: printf("\nSmallest Number is: %d", b); 
        break;
        
        case 3: printf("\nSmallest Number is: %d", c); 
        break;
    }

    getch();
}