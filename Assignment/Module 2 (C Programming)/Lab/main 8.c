// Write a C program that stores 5 integers in a one-dimensional array and prints 
// them. Extend this to handle a two-dimensional array (3x3 matrix) and 
// calculate the sum of all elements. 

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,marks[5];
    
    // One-Dimensional Array
    marks[0] = 50;
    marks[1] = 60;
    marks[2] = 70;
    marks[3] = 80;
    marks[4] = 90;
    
    printf("One-Dimensional Array: ");
    for(i = 0; i < 5; i++)
    {
        printf("\n%d", marks[i]);
    }
    printf("\n\n");
    
    // Two-Dimensional Array
    int j,sum = 0;
    
    printf("Two-Dimensional Array: ");
    printf("\n");
    int num[3][3] = {{1,3,5},{2,4,8},{7,9,6}};
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
            sum += num[i][j];
        }
        printf("\n");
    }
    printf("\nSum Of All Elements is: %d", sum);
    
    getch();
}