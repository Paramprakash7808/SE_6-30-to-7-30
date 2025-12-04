#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw() = 0;
};

class Rectangle : public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Rectangle..."<<endl;;
    }
};

class Circle : public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Circle..."<<endl;
    }
};

int main()
{
    Rectangle rec;
    Circle cir;
    
    rec.draw();
    cir.draw();
    
    return 0;
}