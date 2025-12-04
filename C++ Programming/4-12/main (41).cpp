#include<iostream>
using namespace std;

class A
{
    public:
    int num;
    string name;
    
    void display()
    {
        cout<<num<<" "<<name<<endl;
    }
};

int main()
{
    A a;
    
    // Setting Values
    a.num = 101;
    a.name = "Prakash";
    
    // Getting Values
    a.display();
    
    return 0;
}