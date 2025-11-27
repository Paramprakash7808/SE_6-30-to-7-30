#include<iostream>
using namespace std;

struct mul
{
    int height, width;
};

int main()
{
    struct mul m;
    
    m.height = 5;
    m.width = 5;
    
    cout<<"Mutiplication is: "<<m.height * m.width<<endl;
    
    return 0;
}