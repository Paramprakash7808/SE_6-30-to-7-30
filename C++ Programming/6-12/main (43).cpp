#include<iostream>
using namespace std;

// Friend Function 
class MyClass 
{
	private:
	int Secret=34; 
	
	public:
	friend class SecondClass;
	MyClass() : Secret(0){}
	void printMember() 
	{ 
    	cout<<Secret<<endl; 
	}
};

class SecondClass
{
	public:
	void change(MyClass& yourclass, int x)
	{ 
	    yourclass.Secret = x;
	} 
};

int main()
{
   	MyClass my_class;
	SecondClass sec_class;
	my_class.printMember();
	sec_class.change(my_class,5);
	my_class.printMember(); 
}