// Write a C++ program that performs both implicit and explicit type conversions and 
// prints the results. 
// o Objective: Practice type casting in C++.

#include<iostream>
using namespace std;

int main()
{
    // Implicit Conversion
    int a = 5;
    float b = a;   // int automatically converted to float (implicit)

    // Explicit Conversion
    float x = 5.75;
    int y = (int)x;   // float manually converted to int (explicit)

    cout<<"Implicit Conversion Value is: "<<b<<endl;
    cout<<"Explicit Conversion Value is: "<<y<<endl;

    return 0;
}