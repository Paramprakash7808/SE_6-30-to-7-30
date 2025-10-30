#include<stdio.h>
#include<conio.h>

// function without parameter and without return type
int sum()
{
    int a = 5;
    int b = 8;
    int c = a + b;
    printf("%d", c);
}

int main()
{
    sum();
    
    return 0;
}