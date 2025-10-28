#include <stdio.h>
#include <conio.h>

void main()
{
    int n,sum=0,i=0;
    
     printf ("Enter a number") ;
     scanf ("%d",&n); 
     
     num:
     i++;
     sum += i ;
     
     if(i<n)
     goto num;
     printf("sum of digits are %d",sum);
     
	getch();
}