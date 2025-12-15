// Write a program that demonstrates the difference between local and global 
// variables in C++. Use functions to show scope. 
// o Objective: Reinforce the concept of variable scope. 

#include<iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showGlobal()
{
    cout<<"Inside ShowGlobal Global Variable's Value is: "<<globalVar<<endl;
}

void localExample()
{
    int localVar = 20;   // Local variable (only accessible within thsi function)
    cout<<"Inside LocalExample Local Variable's Value is: "<<localVar<<endl;
}

int main()
{
    int localVar = 5; 

    cout<<"Inside Main Local Variable's Value is: "<<localVar<<endl;
    cout<<"Inside Main Global Variable's Value is: "<<globalVar<<endl;

    showGlobal();
    localExample();

    return 0;
}