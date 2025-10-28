#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    return a + b;
}

void main()
{
    printf("\n%d", add(5,5));
    printf("\n%d", add(5,6));
    printf("\n%d", add(5,7));
    
    getch();
}