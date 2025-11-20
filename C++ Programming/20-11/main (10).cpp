#include<iostream>
using namespace std;
class student
{
    // default Constructor
    public:
    student()
    {
        cout<<"Executed";
    }
};

int main()
{
    student s1 = student();
    student s2 = student();
    
    return 0;
}