#include<iostream>
using namespace std;

// Inline for Faster Execution
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    
    cout<<"Enter Firt Number: ";
    cin>>x;
    
    cout<<"Enter Second Number: ";
    cin>>y;
    
    cout<<"Addition of Firt and Second Number is: "<<add(x,y);
    
    return 0;
}