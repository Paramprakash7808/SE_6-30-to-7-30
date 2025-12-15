// Write a C program that takes N numbers from the user and stores them in an array. The 
// program should then calculate and display the sum of all array elements. 
// • Challenge: Modify the program to also find the average of the numbers. 

#include<stdio.h>
#include<conio.h>

void main() {
    int num, i, sum = 0;
    int arr[100];
    float average;

    printf("Enter The Number of Elements: ");
    scanf("%d", &num);

    printf("Enter %d Numbers:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    // Calculate average
    average = (float)sum/num;

    printf("\nSum of All Elements: %d", sum);
    printf("\nAverage of The Numbers: %f", average);

    getch();
}