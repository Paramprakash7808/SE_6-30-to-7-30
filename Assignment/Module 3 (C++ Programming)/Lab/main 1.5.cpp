// 4)Write a program that asks for two numbers and displays their sum. 

#include<iostream>
using namespace std;
int main()
{
    int a,b,sum = 0;
    
    cout<<"Enter First Number: ";
    cin>>a;
    
    cout<<"Enter Second Number: ";
    cin>>b;
    
    sum = a + b;
    
    cout<<"Addition of First and Second Number is: "<<sum;
    
    return 0;
}