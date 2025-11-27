#include<iostream>
using namespace std;

// Method Overloading (Polymorphism)
class Calculation
{
    public:
    int cal(int a, int b)
    {
        return a + b;
    }
    
    int cal(int a, int b, int c)
    {
        return a * b * c;
    }
};

int main()
{
    Calculation c;
    cout<<"Addition is: "<<c.cal(4,5)<<endl;
    cout<<"Multiplication is: "<<c.cal(4,5,6)<<endl;
    
    return 0;
}