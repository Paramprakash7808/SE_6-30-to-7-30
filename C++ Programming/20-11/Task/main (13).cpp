// class User 
// name
// surname
// technology

// display-method

// int main()
// {
// 	constructor data get
// 	//userinput

// 	display

// }

#include<iostream>
using namespace std;
class User
{
    public:
    string name;
    string surname;
    string technology;
    
    User(string n,string s,string t)
    {
        name = n;
        surname = s;
        technology = t;
    }
    
    void display()
    {
        cout<<name<<" "<<surname<<" "<<technology<<endl;
    }
};

int main()
{
    string name1,surname1,technology1;
    string name2,surname2,technology2;
    
    cout<<"Enter Your Name: ";
    cin>>name1;
    
    cout<<"Enter Your Surname: ";
    cin>>surname1;
    
    cout<<"Enter Your Technology: ";
    cin>>technology1;
    
    cout<<"Enter Your Name: ";
    cin>>name2;
    
    cout<<"Enter Your Surname: ";
    cin>>surname2;
    
    cout<<"Enter Your Technology: ";
    cin>>technology2;
    
    User u1 = User(name1,surname1,technology1);
    User u2 = User(name2,surname2,technology2);
    
    u1.display();
    u2.display();
    
    return 0;
}