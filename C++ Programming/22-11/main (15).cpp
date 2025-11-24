#include<iostream>
using namespace std;

// Multilevel Inheritance
class A
{
    public:
    void a()
    {
        cout<<"A Called"<<endl;
    }
};

class B : public A
{
    public:
    void b()
    {
        cout<<"B Called"<<endl;
    }
};

class C : public B
{
    public:
    void c()
    {
        cout<<"C Called"<<endl;
    }
};

int main()
{
    C c;
    c.a();
    c.b();
    c.c();
    
    return 0;
}