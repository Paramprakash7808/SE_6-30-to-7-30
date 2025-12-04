#include<iostream>
using namespace std;

// Destructor
class A
{
    public:
    A()
    {
        cout<<"Constructor Called"<<endl;
    }
    
    ~A()
    {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    A a = A();
    
    return 0;
}