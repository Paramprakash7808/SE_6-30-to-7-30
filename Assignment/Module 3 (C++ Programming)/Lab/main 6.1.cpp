// Write a C++ program that defines a class Calculator with functions for addition, 
// subtraction, multiplication, and division. Create objects to use these functions. 
// o Objective: Introduce basic class structure. 

#include<iostream>
using namespace std;

class Calculator
{
    public:

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
};

int main()
{
    Calculator c;

    int x, y;
    char op;

    cout<<"Enter First Number: ";
    cin>>x;

    cout<<"Enter Second Number: ";
    cin>>y;

    cout<<"Enter 1 For Addition"<<endl<<"Enter 2 for Subtraction"<<endl<<"Enter 3 For Multiplication"<<endl<<"Enter 4 For Division"<<endl;
    cin>>op;

    if (op == '1')
        cout<<"Addition is: "<<c.add(x, y)<<endl;

    else if (op == '2')
        cout<<"Subtraction is: "<<c.subtract(x, y)<<endl;

    else if (op == '3')
        cout<<"Multiplication is: "<<c.multiply(x, y)<<endl;

    else if (op == '4')
        cout<<"Division is: "<<c.divide(x, y)<<endl;
    else
        cout<<"Invalid Operator!"<<endl;

    return 0;
}