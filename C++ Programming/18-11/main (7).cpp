#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    string surname;
    string email;
    string pass;
    
    void display()
    {
        cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<pass<<endl;
    }
};

int main()
{
    student st1;
    student st2;
    
    st1.id = 101;
    st1.name = "Prakash";
    st1.surname = "Makwana";
    st1.email = "P@gmail.com";
    st1.pass = "1234";
    
    st2.id = 102;
    st2.name = "ABCD";
    st2.surname = "EFGH";
    st2.email = "A@gmail.com";
    st2.pass = "4568";
    
    st1.display();
    st2.display();
    
    
    return 0;
}