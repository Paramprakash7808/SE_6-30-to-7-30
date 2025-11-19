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
    student s1;
    
    cout<<"Enter Your Id: ";
    cin>>s1.id;
    
    cout<<"Enter your Name: ";
    cin>>s1.name;
    
    cout<<"Enter Your Surname: ";
    cin>>s1.surname;
    
    cout<<"Enter Your Email: ";
    cin>>s1.email;
    
    cout<<"Enter Your Password: ";
    cin>>s1.pass;
    
    if(s1.email == "P@gmail.com" && s1.pass == "1234")
    {
        cout<<"Congratulations";
    }
    else
    {
        cout<<"Incorrect Email and Password";
    }
    
    return 0;
}