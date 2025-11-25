#include<iostream>
using namespace std;
class Shape
{
    public:
    float a,b;
    
    void shape(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
};

class Rectangle : public Shape
{
    public:
    float rect;
    
    void rectangle()
    {
        rect = a * b;
        cout<<"Area Of Rectangle is: "<<rect<<endl;
    }
};

class Triangle : public Shape
{
    public:
    float tri;
    
    void triangle()
    {
        tri = 0.5 * a * b;
        cout<<"Area Of Triangle is: "<<tri<<endl;
    }
};

int main()
{
    float a,b;
    
    cout<<"Enter Value For A: ";
    cin>>a;
    
    cout<<"Enter Value For B: ";
    cin>>b;
    
    Rectangle rec;
    Triangle tri;
    
    rec.shape(a,b);
    rec.rectangle();
    
    tri.shape(a,b);
    tri.triangle();
    
    return 0;
}