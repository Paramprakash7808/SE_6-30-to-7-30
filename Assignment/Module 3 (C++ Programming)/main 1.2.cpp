// 2)Write a C++ program that accepts user input for their name and age and then 
// displays a personalized greeting. 

#include<iostream>
using namespace std;
int main()
{
    int age;
    string name;
    
    cout<<"Enter Your Name: ";
    cin>>name;
    
    cout<<"Enter Your Age: ";
    cin>>age;
    
    
    cout<<"Hello "<<name<<" "<<endl<<"Your Age is: "<<age;
    
    return 0;
}