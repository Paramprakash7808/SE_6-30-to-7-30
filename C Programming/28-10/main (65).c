#include<stdio.h>
#include<conio.h>
void main()
{
   
    int a,b,c,d;
    printf("Enter Value for a: ");
    scanf("%d",&a);
    
    printf("Enter Value for b: ");
    scanf("%d",&b);
    
    int c1 = a+b;
    
    printf("Enter Value for c: ");
    scanf("%d",&c);
    
    printf("Enter Value for d: ");
    scanf("%d",&d);
    
    int e = c+d;
    
    printf("Addition of a and b is %d",c1);
    printf("\nAddition of c and d is %d",e);
    
    getch();
}