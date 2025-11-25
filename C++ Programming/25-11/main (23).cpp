#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    
    public:
    void a1(int n)
    {
        a = n;
    }
};

class B
{
    protected:
    int b;
    
    public:
    void b1(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
    public:
    void add()
    {
        cout<<"Enter Value of A: ";
        cin>>a;
        
        cout<<"Enter Value of B: ";
        cin>>b;
        
        cout<<"Addition of A and B is: "<<a + b<<endl;
    }
};

int main()
{
    C c;
    c.add();
    
    return 0;
}