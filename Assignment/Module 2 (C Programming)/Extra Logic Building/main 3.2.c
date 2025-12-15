//  Write a C program that implements a simple number guessing game. The program should 
// generate a random number between 1 and 100, and the user should guess the number 
// within a limited number of attempts. 
// • Challenge: Provide hints to the user if the guessed number is too high or too low. 

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

    printf("Welcome To The Number Guessing Game!\n");
    printf("I Have Chosen a Number Between 1 and 100.\n");
    printf("You Have %d Attempts To Guess It.\n", maxAttempts);

    while(attempts < maxAttempts) 
    {
        printf("Enter Your Guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess == number) 
        {
            printf("Congratulations! You Guessed The Number In %d Attempts.\n", attempts);
            break;
        } 
        else if(guess < number) 
        {
            printf("Too Low! Try a Higher Number.\n");
        } 
        else 
        {
            printf("Too High! Try a Lower Number.\n");
        }
    }

    if(guess != number) 
    {
        printf("Sorry! You Have Used All %d Attempts. The Number Was %d.\n", maxAttempts, number);
    }

    getch();
}