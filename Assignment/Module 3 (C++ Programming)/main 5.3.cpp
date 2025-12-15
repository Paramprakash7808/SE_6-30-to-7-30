// Write a C++ program to check if a given string is a palindrome (reads the same 
// forwards and backwards). 
// o Objective: Practice string operations. 

#include<iostream>
using namespace std;

int main()
{
    string str, reversed = "";

    cout<<"Enter a String: ";
    cin>>str;  

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }

    // Check palindrome
    if (str == reversed)
        cout<<"Given String is Palindrome."<<endl;
    else
        cout<<"Given String is Not Palindrome."<<endl;

    return 0;
}