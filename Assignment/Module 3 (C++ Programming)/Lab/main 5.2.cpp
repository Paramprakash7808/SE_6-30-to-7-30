// Write a C++ program to perform matrix addition on two 2x2 matrices. 
// o Objective: Practice multi-dimensional arrays. 

#include<iostream>
using namespace std;

int main()
{
    int A[2][2], B[2][2], C[2][2];

    cout<<"Enter Elements of Matrix A (2x2): "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>A[i][j];
        }
    }

    cout << "Enter Elements of Matrix B (2x2): "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<<"Addition of Matrix A and B is: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}