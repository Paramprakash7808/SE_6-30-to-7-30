#include<iostream>
using namespace std;

struct area
{
    public:
    int height, width;
    
    area(int h, int w)
    {
        height = h;
        width = w;
    }
    
    void display()
    {
       cout<<"Area is: "<<height * width; 
    }
};

int main()
{
    struct area a = area(5,5);
    a.display();
    
    return 0;
}
