// Write a C program that implements a simple number guessing game. The program should 
// generate a random number between 1 and 100, and the user should guess the number 
// within a limited number of attempts. 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main() 
{
    int number, guess, attempts = 0, maxAttempts = 10;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // random number between 1 and 100

    printf("\nWelcome To The Number Guessing Game!");
    printf("\nI Have Chosen a Number Between 1 and 100.\n");
    printf("\nYou Have %d Attempts To Guess It.", maxAttempts);

    while(attempts < maxAttempts) 
    {
        printf("Enter Your Guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess == number) 
        {
            printf("Congratulations! You Guessed The Number in %d Attempts.\n", attempts);
            break;
        } 
        else if(guess < number) {
            printf("Try With Higher Number\n");
        } 
        else {
            printf("Try With Lower Number\n");
        }
    }

    if(guess != number) 
    {
        printf("\nSorry! You Have Used All Attempts. The Number was %d.", number);
    }

    getch();
}