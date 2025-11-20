#include<iostream>
using namespace std;
class student
{
    // Parameterized Constructor
    public:
    // Global Variable
    int id = 0;
    string name = "ABCD";
    
    student(int id,string name)
    {
        // local Variable
        this->id = id;
        this->name = name;
    }
    
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    student s1 = student(101, "Prakash");
    student s2 = student(101, "Prakash");
    
    s1.display();
    s2.display();
    
    return 0;
}