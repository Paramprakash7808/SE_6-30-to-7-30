#include<iostream>
using namespace std;

// Method Overriding (Polymorphism)
class RBI
{
    public:
    virtual int rate()
    {
        return 0;
    }
};

class SBI : public RBI
{
    public:
    int rate()
    {
        return 5;
    }
};

class ICICI : public RBI
{
    public:
    int rate()
    {
        return 6;
    }
};

class AXIS : public RBI
{
    public:
    int rate()
    {
        return 7;
    }
};

int main()
{
    // SBI s;
    // ICICI i;
    // AXIS a;
    
    // cout<<"SBI's Return is: "<<s.rate()<<endl;
    // cout<<"ICICI's Return is: "<<i.rate()<<endl;
    // cout<<"AXIS's Return is: "<<a.rate()<<endl;
    
    RBI *r;
    
    r = new SBI();
    cout<<"SBI's Return is: "<<r->rate()<<endl;
    
    r = new ICICI();
    cout<<"ICICI's Return is: "<<r->rate()<<endl;
    
    r = new AXIS();
    cout<<"AXIS's Return is: "<<r->rate()<<endl;
    
    return 0;
}