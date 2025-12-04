#include<iostream>
using namespace std;

float division(int x, int y)
{
    if(y == 0)
    {
        throw "Attempted to divide by zero!";
    }
    
    return x/y;
}

int main()
{
    int i = 25;
    int j = 5;
    int k = 0;
    
    try
    {
        k = division(i,j);
        cout<<"Division of x and y is: "<<k<<endl;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
    }
    
    return 0;
}