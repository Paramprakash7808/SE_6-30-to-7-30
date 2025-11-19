#include<stdio.h>
#include<conio.h>
void main()
{
    char a = 'b';
    char *ptr;
    
    printf("\n%c", a); //value
    ptr = &a;
    printf("\n%p", ptr); //memory address
    
    getch();
}