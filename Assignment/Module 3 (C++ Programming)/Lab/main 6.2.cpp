// Create a class BankAccount with data members like balance and member functions 
// like deposit and withdraw. Implement encapsulation by keeping the data members 
// private. 
// o Objective: Understand encapsulation in classes. 

#include<iostream>
using namespace std;

class BankAccount
{
    private:
    float balance;  

    public:
    BankAccount(float b)
    {
        balance = b;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout<<"Amount Deposited: "<<amount<<endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient Balance!"<<endl;
        }
    }

    void display()
    {
        cout<<"Current Balance is: "<<balance<<endl;
    }
};

int main()
{
    BankAccount account(64000);   

    account.display();

    account.deposit(1300);
    account.display();

    account.withdraw(300);
    account.display();

    return 0;
}