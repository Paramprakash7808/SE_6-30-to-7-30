#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch1[] = "Mango";
    char ch2[50];
    
    do
    {
        cout<<"Enter Your Favourite Fruit: ";
        cin>>ch2;
    }
    while(strcmp(ch2,ch1)!= 0);
    
    cout<<"Congratulations You Gaussed the Right Fruit";
    
    return 0;
}