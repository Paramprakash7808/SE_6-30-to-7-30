#include<iostream>
using namespace std;
class Account
{
    public:
    int acc_no;
    string name;
    static float roi;
    
    Account(int acc_no, string name)
    {
        this->acc_no = acc_no;
        this->name = name;
    }
    
    void display()
    {
        cout<<acc_no<<" "<<name<<" "<<roi<<endl;
    }
};

float Account :: roi = 6.5;

int main()
{
    Account a1 = Account(1234, "Prakash");
    Account a2 = Account(5678, "Rahul");
    
    a1.display();
    a2.display();
    
    return 0;
}