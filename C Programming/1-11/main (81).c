#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];
    
    marks[0] = 15;
    marks[1] = 35;
    marks[2] = 25;
    marks[3] = 45;
    marks[4] = 65;
    
    for(int i = 0; i <= 4; i++)
    {
        printf("\n Mark is: %d", marks[i]);
    }
    
    return 0;
}