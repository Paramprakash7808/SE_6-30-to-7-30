// Write a C++ program that asks the user to guess a number between 1 and 100. The 
// program should provide hints if the guess is too high or too low. Use loops to allow 
// the user multiple attempts. 
// o Objective: Understand while loops and conditional logic.

#include<iostream>
using namespace std;

int main()
{
    int secret = 50;  
    int guess;

    cout<<"Guess a Number Between 1 and 100:" << endl;

    while (true)
    {
        cout<<"Enter Your Guess: ";
        cin>>guess;

        if (guess == secret)
        {
            cout<<"Congratulations! You Guessed The Right Number."<<endl;
            break; 
        }
        else if (guess > secret)
        {
            cout<<"Try With Lower Number"<<endl;
        }
        else
        {
            cout<<"Try With Higher Number"<<endl;
        }
    }

    return 0;
}