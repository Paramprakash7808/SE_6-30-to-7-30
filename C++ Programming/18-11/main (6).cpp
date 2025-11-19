#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
};

int main()
{
    student st1;
    student st2;
    
    st1.id = 101;
    st1.name = "Prakash";
    
    st2.id = 102;
    st2.name = "Makwana";
    
    cout<<"Your Id is: "<<st1.id<<endl;
    cout<<"your Name is: "<<st1.name<<endl;
    cout<<"Your Id is: "<<st2.id<<endl;
    cout<<"Your Name is: "<<st2.name<<endl;
    
    return 0;
}