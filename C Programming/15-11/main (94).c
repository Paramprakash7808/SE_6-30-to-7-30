#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int *p;
    int i;
    
    p = &a[0];
    printf("Enter Values for Array: ");
    
    for(i = 0; i < 10; i++)
    {
        printf("a[%d]:", i + 1);
        scanf("%d", &(*p++));
    }
    
    p = &a[0];
    printf("\nValues of Array is: ");
    
    for(i = 0; i < 10; i++)
    {
        printf("\na[%d]: [%d]", i + 1, *p++);
    }
    
    return 0;
}