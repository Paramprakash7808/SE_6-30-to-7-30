#include <iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    void inputPerson()
    {
        cout<<"Enter Your Name: ";
        cin>>name;

        cout<<"Enter Your Age: ";
        cin>>age;
    }

    void displayPerson()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};

class Student : public Person
{
    public:
    int rollNo;

    void inputStudent()
    {
        inputPerson();
        cout<<"Enter Your Roll Number: ";
        cin>>rollNo;
    }

    void displayStudent()
    {
        displayPerson();
        cout<<"Roll Number is: "<<rollNo<<endl;
    }
};

class Teacher : public Person
{
    public:
    string subject;

    void inputTeacher()
    {
        inputPerson();
        cout<<"Enter Your Subject's: ";
        cin>>subject;
    }

    void displayTeacher()
    {
        displayPerson();
        cout<<"Subject: "<<subject<<endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout<<"Enter Student Details: "<<endl;
    s.inputStudent();

    cout<<endl<<"Enter Teacher Details: "<<endl;
    t.inputTeacher();

    cout<<endl<<"Student's Information is: "<<endl;
    s.displayStudent();

    cout<<endl<<"Teacher's Information is: "<<endl;
    t.displayTeacher();

    return 0;
}