#include<iostream>
using namespace std;
int main()
{
    int age;
    
    cout<<"Enter Your Age: ";
    cin>>age;
    
    if(age >= 18)
    {
        cout<<"Eligible to Vote";
    }
    else
    {
        cout<<"Not Eligible to Vote";
    }
    
    return 0;
}