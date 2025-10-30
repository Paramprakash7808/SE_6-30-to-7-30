#include<stdio.h>
#include<conio.h>

// function with parameter and with return type
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    printf("%d", sum(2,5));
    printf("\n%d", sum(4,9));
    
    return 0;
}