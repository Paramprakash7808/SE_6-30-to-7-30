#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch1[50],ch2[50];
    
    cout<<"Enter Your Name: ";
    cin>>ch1;
    
    strcpy(ch2,ch1);
    
    cout<<ch2<<endl;
    
    return 0;
}