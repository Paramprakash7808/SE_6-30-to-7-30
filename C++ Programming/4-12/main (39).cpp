#include<iostream>
using namespace std;

// Dynamic Constructor
class Account
{
    private:
    int acc_no;
    int balance;
    
    public:
    Account(int a,int b)
    {
        acc_no = a;
        balance = b;
    }
    
    void display()
    {
        cout<<"Account Number is: "<<acc_no<<endl;
        cout<<"Balance is: "<<balance;
    }
};

int main()
{
    int an, bal;
    
    cout<<"Enter Account Number: ";
    cin>>an;
    
    cout<<"Enter Balance: ";
    cin>>bal;
    
    Account *acc = new Account(an, bal);
    
    acc->display();
    
    
    return 0;
}