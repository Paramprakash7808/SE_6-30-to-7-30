#include<stdio.h>
#include<conio.h>
int main()
{
    int age[5];
    
    age[0] = 15;
    age[1] = 18;
    age[2] = 25;
    age[3] = 35;
    age[4] = 45;
    
    for(int i = 0; i <= 4; i++)
    {
        printf("\n Age is: %d", age[i]);
    }
    
    return 0;
}