#include<iostream>
using namespace std;
class Account
{
    public:
    int acc_no;
    string name;
    static int count;
    
    Account(int acc_no, string name)
    {
        this->acc_no = acc_no;
        this->name = name;
        count++;
        cout<<count<<endl;
    }
    
    void display()
    {
        cout<<acc_no<<" "<<name<<" "<<count<<endl;
    }
};

int Account :: count = 0;

int main()
{
    Account a1 = Account(1234, "ABCD");
    Account a2 = Account(5678, "EFGH");
    Account a3 = Account(8923, "JKLM");
    Account a4 = Account(8562, "PQRS");
    
    // a1.display();
    // a2.display();
    // a3.display();
    // a4.display();
    
    return 0;
}