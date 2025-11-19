#include<iostream>
using namespace std;
int main()
{
    int choice;
    
    cout<<"Press 1 for Gujarati Press 2 for Hindi and Press 3 for English"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"Selected Language is Gujarati";
        break;
        
        case 2:
        cout<<"Selected Language is Hindi";
        break;
        
        case 3:
        cout<<"Selected Language is English";
        break;
        
        default:
        cout<<"Inavalid Choice Enter a Number Between 1 to 3";
        break;
    }
    
    return 0;
}