#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp,arr[10];
    
    printf("Enter 10 Integers: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("\nAscending Order: ");
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nDescending Order: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}