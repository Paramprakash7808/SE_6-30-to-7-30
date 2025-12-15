// Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
// resultant matrix. 
// • Challenge: Extend the program to work with 3x3 matrices and matrix multiplication. 

#include<stdio.h>
#include<conio.h>

void main() {
    int a[3][3], b[3][3], sum[3][3], mul[3][3];
    int i, j, k;

    printf("\nEnter 9 Elements For Matrix A:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter 9 Elements For Matrix B:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Matrix Multiplication
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            mul[i][j] = 0;
            for(k=0; k<3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatrix Addition (A + B):\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplication (A * B):\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    getch();
}