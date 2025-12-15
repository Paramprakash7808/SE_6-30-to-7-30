// Write a C++ program that accepts an array of integers, calculates the sum and 
// average, and displays the results. 
// o Objective: Understand basic array manipulation. 

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Number of Elements: ";
    cin>>num;

    int arr[num];
    int sum = 0;

    cout<<"Enter "<<num<<" numbers:"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        sum += arr[i];  
    }

    float avg = (float)sum / num;

    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg<<endl;

    return 0;
}