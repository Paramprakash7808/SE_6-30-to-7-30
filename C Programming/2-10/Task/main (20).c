// 3. Write a program to make a square and cube of number.

#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    
    printf("\nSquare is: %d", num*num);
    printf("\nCube is: %d", num*num*num);
    
    getch();
}