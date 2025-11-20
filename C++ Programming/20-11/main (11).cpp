#include<iostream>
using namespace std;
class student
{
    // Parameterized Constructor
    public:
    int id;
    string name,surname,email,password;
    
    student(int i,string n,string s,string e,string p)
    {
        id = i;
        name = n;
        surname = s;
        email = e;
        password = p;
    }
    
    void display()
    {
        cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<password<<endl;
    }
};

int main()
{
    student s1 = student(101,"Prakash","Makwana","P@gmail.com","1234");
    student s2 = student(101,"Prakash","Makwana","P@gmail.com","1234");
    student s3 = student(101,"Prakash","Makwana","P@gmail.com","1234");
    student s4 = student(101,"Prakash","Makwana","P@gmail.com","1234");
    student s5 = student(101,"Prakash","Makwana","P@gmail.com","1234");
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    
    return 0;
}