// Write a C++ program that defines functions for basic arithmetic operations (add, 
// subtract, multiply, divide). The main function should call these based on user input. 
// o Objective: Practice defining and using functions in C++. 

#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

float divide(float a, float b)
{
    return a/b;
}

int main()
{
    int num1, num2;
    char op;

    cout<<"Enter First Number: ";
    cin>>num1;

    cout<<"Enter Second Number: ";
    cin>>num2;

    cout<<"Enter 1 for Addition"<<endl<<"Enter 2 for Subtraction"<<endl<<"Enter 3 for Multiplication"<<endl<<"Enter 4 for Division"<<endl;
    cin>>op;

    if (op == '1')
        cout<<"Addition is: "<<add(num1, num2)<<endl;

    else if (op == '2')
        cout<<"Subtraction is: "<<subtract(num1, num2)<<endl;

    else if (op == '3')
        cout<<"Multiplication is: "<<multiply(num1, num2)<<endl;

    else if (op == '4')
        cout<<"Division is: "<<divide(num1, num2)<<endl;

    else
        cout<<"Invalid Operator!"<<endl;

    return 0;
}