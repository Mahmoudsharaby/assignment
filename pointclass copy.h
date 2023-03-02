#ifndef pointclass_h
#define pointclass_h
#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
    float x;
    float y;
public:
    point()
    {
        x=0;
        y=0;
    }
    point( float num,float num2)
    {
        x=num;
        y=num2;
        
    }
    void setx(float num)
    {
        x=num;
    }
    void sety(float num)
    {
        y=num;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    void display()
    {
        cout << "(" << x << "," << y <<")" << endl;
    }
    float distance(point &b)
    {
        return sqrt(pow(x-b.x,2)+pow(y-b.y,2));
    }
};
#endif /* pointclass_h */
