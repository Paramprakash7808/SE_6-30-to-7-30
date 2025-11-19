#include<stdio.h>
#include<conio.h>
struct details
{
    int num;
};

void main()
{
    struct details Maindetails;
    struct details *structptr;
    
    structptr = &Maindetails;
    
    structptr->num = 100;
    printf("\n%d", Maindetails.num);
    
    getch();
}