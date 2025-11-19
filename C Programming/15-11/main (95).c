#include<stdio.h>
#include<conio.h>
void interchange(int *x1, int *y1)
{
    int z1;
    z1 = *x1;
    *x1 = *y1;
    *y1 = z1;
    printf("Before Swapping: x1 = %d y1 = %d", *x1, *y1);
}

int main()
{
   int x = 78, y = 56;
   
   interchange(&x,&y);
   printf("\nAfter Swapping: x = %d y = %d", x,y);
    
    return 0;
}