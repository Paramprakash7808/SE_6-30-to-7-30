// Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
// o Objective: Learn nested control structures. 

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;

    cout<<"Enter Number of Rows: ";
    cin>>rows;

    // Outer Loop For Rows
    for (i = 1; i <= rows; i++)
    {
        // Inner Loop For Printing Stars In Each Line
        for (j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
