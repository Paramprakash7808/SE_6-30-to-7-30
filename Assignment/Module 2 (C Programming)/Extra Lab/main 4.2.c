// Write a C program that accepts 10 integers from the user and stores them in an array. The 
// program should then find and print the maximum and minimum values in the array. 
// • Challenge: Extend the program to sort the array in ascending order. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10];
    int i, j, temp, max, min;

    printf("Enter 10 Integers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    // Sort in Ascending
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nMaximum Value is: %d", max);
    printf("\nMinimum Value is: %d", min);

    printf("\nArray in Ascending Order is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
}