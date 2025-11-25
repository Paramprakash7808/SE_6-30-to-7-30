#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    
    void a1(int n)
    {
        a = n;
    }
};

class B : public A
{
    protected:
    int b;
    
    void b1(int n)
    {
        b = n;
    }
};

class C
{
    protected:
    int c;
    
    void c1(int n)
    {
        c = n;
    }
};

class D : public B, public C
{
    public:
    
    void mul()
    {
        cout<<"Enter Value of A: ";
        cin>>a;
        
        cout<<"Enter Value of B: ";
        cin>>b;
        
        cout<<"Enter Value of C: ";
        cin>>c;
        
        cout<<"Multiplication A and B and C is: "<<a * b * c;
    }
};

int main()
{
    D d;
    d.mul();
    
    return 0;
}