// Write a C++ program to display the multiplication table of a given number using a for 
// loop. 
// o Objective: Practice using loops.

#include<iostream>
using namespace std;

int main()
{
    int num,i;

    cout<<"Enter a Number: ";
    cin>>num;

    for (i = 1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num * i<<endl;
    }

    return 0;
}