#include<stdio.h>
#include<conio.h>

// function with parameter and without return type
int sum(int a,int b)
{
    int c = a+b;
    printf("%d", c);
}

int main()
{
    sum(2,5);
    
    return 0;
}