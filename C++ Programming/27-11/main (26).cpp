#include<iostream>
using namespace std;

// Method Overloading with same parameters (Polymorphism)
class Calculation
{
    public:
    int cal(int a, int b)
    {
        return a + b;
    }
    
    double cal(double a, double b)
    {
        return a * b;
    }
};

int main()
{
    Calculation c;
    cout<<"Addition is: "<<c.cal(4,5)<<endl;
    cout<<"Multiplication is: "<<c.cal(4.0,5.0)<<endl;
    
    return 0;
}