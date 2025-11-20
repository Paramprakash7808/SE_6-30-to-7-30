#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"Executed";
    }
    
    int id;
    string name;
    
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    student s1 = student();
    student s2 = student();
    
    return 0;
}