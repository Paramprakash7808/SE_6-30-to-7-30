#include<iostream>
using namespace std;

class sum
{
    private:
    int x,y,z;
    
    public:
    void add()
    {
        cout<<"Enter First Number: ";
        cin>>x;
        
        cout<<"Enter Second Number: ";
        cin>>y;
        
        z = x + y;
        
        cout<<"Sum of First and Second Number is: "<<z<<endl;
    }
};

int main()
{
    sum sm;
    sm.add();
    
    return 0;
}