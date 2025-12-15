// Write a C++ program that calculates the factorial of a number using recursion. 
// o Objective: Understand recursion in functions. 

#include<iostream>
using namespace std;

// Recursive function to find factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;             
    else
        return n * factorial(n - 1);  // Recursive call
}

int main()
{
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;

    return 0;
}