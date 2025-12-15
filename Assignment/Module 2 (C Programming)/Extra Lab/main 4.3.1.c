// Write a C program that takes N numbers from the user and stores them in an array. The 
// program should then calculate and display the sum of all array elements. 

#include<stdio.h>
#include<conio.h>

void main() {
    int num, i, sum = 0;
    int a[100];  

    printf("Ente Numbers: ");
    scanf("%d", &num);

    printf("Enter %d Numbers:\n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];  
    }

    printf("\nSum of All Elements is: %d", sum);

    getch();
}