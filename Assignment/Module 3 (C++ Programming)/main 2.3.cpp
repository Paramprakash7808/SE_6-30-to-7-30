// Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
// operators. Perform operations using each type of operator and display the results. 
// o Objective: Reinforce understanding of different types of operators in C++.

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout<<"Arithmetic Operators:"<<endl;
    cout<<"Addition of a and b is: "<<a+b<<endl;
    cout<<"Subtraction of a and b is: "<<a-b<<endl;
    cout<<"Multiplication of a and b is: "<<a*b<<endl;
    cout<<"Division of a and b is: "<<a/b<<endl;
    cout<<"Modules of a and b is: "<<a%b<<endl<<endl;

    cout<<"Relational Operators:"<<endl;
    cout<<"a < b = "<<(a<b)<<endl;
    cout<<"a > b = "<<(a>b)<<endl;
    cout<<"a <= b = "<<(a <= b)<<endl;
    cout<<"a >= b = "<<(a >= b)<<endl;
    cout<<"a == b = "<<(a == b)<<endl;
    cout<<"a != b = "<<(a != b)<<endl<<endl;

    bool x = true, y = false;
    cout<<"Logical Operators:"<<endl;
    cout<<"x && y = "<<(x&&y)<<endl;
    cout<<"x || y = "<<(x||y)<<endl;
    cout<<"!x = "<<(!x)<<endl<<endl;

    cout<< "Bitwise Operators:"<<endl;
    cout<<"a & b = "<<(a&b)<<endl;   // AND
    cout<<"a | b = "<<(a|b)<<endl;   // OR
    cout<<"a ^ b = "<<(a^b)<<endl;   // XOR
    cout<<"~a = "<<(~a)<<endl;         // NOT
    cout<<"a << 1 = "<<(a<<1)<<endl; // Left shift
    cout<<"a >> 1 = "<<(a>>1)<<endl; // Right shift

    return 0;
}