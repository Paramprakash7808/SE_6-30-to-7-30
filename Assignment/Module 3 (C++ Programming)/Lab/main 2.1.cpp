// Write a C++ program that demonstrates the use of variables and constants. Create 
// variables of different data types and perform operations on them. 
// o Objective: Understand the difference between variables and constants. 

#include<iostream>
using namespace std;

int main()
{
    int a = 10;         
    float b = 5.5;      
    char grade = "A"; 
    const float PI = 3.14;

    int sum = a + 5;
    float area = PI*b*b;

    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    cout<<"Grade: "<<grade<<endl;

    cout<<"Sum of (a + 5) is: "<<sum<<endl;
    cout<<"Area of Circle is: "<<area<<endl;

    return 0;
}