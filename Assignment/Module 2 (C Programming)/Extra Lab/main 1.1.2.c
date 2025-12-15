// Write a C program that acts as a simple calculator. The program should take two numbers 
// and an operator as input from the user and perform the respective operation (addition, 
// subtraction, multiplication, division, or modulus) using operators. 
// • Challenge: Extend the program to handle invalid operator inputs. 

#include<stdio.h>
#include<conio.h>

void main()
{
    float num1, num2;
    char op;

    printf("Enter First Number: ");
    scanf("%f", &num1);
    
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\nEnter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Division \n Enter 5 for Modulus");
    scanf(" %c", &op);   

    switch(op)
    {
        case '1':
            printf("\nAnswer: %f", num1 + num2);
            break;

        case '2':
            printf("\nAnswer: %f", num1 - num2);
            break;

        case '3':
            printf("\nAnswer: %f", num1 * num2);
            break;

        case '4':
            if(num2 != 0)
                printf("\nAnswer: %f", num1 / num2);
            else
                printf("\nAttempted to Divide by 0");
            break;

        case '5':
            printf("\nAnswer: %d", (int)num1 % (int)num2);
            break;

        default:
            printf("\nInvalid operator!");
            break;
    }

    getch();
}