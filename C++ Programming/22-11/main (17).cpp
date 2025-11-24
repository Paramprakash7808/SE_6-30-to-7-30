#include<iostream>
using namespace std;

// Hierarchical Inheritance 
class Bank
{
    public:
    void bank()
    {
        cout<<"Bank"<<endl;
    }
};

class Current : public Bank
{
    public:
    void current()
    {
        cout<<"Current"<<endl;
    }
};

class Saving : public Bank
{
    public:
    void saving()
    {
        cout<<"Saving"<<endl;
    }
};

int main()
{
    Current c;
    Saving s;
    
    c.current();
    c.bank();
    s.saving();
    
    return 0;
}