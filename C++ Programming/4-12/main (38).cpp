#include<iostream>
using namespace std;

// Copy Constructor
class A
{
    public:
    int x,y;
    
    A()
    {
        cout<<"Default Constructor Called";
    }
    
    A(int a, int b)
    {
        x = a;
        y = b;
    }
    
    A(const A &old)
    {
       x = old.x;
       y = old.y;
       
       cout<<"Copy Constructor Called"<<endl;
    }
    
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    A obj1 = A(10,20);
    A obj2 = A(obj1);
    obj2.display();
    
    return 0;
}