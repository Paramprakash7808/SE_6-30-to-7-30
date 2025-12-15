// 3)
// 2)Write two small programs: one using Procedural Programming (POP) to calculate the 
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
// class and object for the same task. 

// using Object-Oriented Programming (OOP) (C++ Language)

#include<iostream>
using namespace std;
class rect
{
    public:
    float length,width,area;
};

int main()
{
    rect r1;
    
    cout<<"Enter Length: ";
    cin>>r1.length;
    
    cout<<"Enter Width: ";
    cin>>r1.width;
    
    r1.area = r1.length * r1.width;
    
    cout<<"Area of Reactangle is: "<<r1.area;
    
    return 0;
}