#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch1[50],ch2[50];
    
    cout<<"Enter Your Name: ";
    cin>>ch1;
    
    cout<<"Enter Your Surname: ";
    cin>>ch2;
    
    cout<<"Concated String is: "<<strcat(ch1,ch2)<<endl;
    
    return 0;
}