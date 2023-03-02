#include <iostream>
#include "pointclass.h"
#include <cstdlib>
#include <time.h>
using namespace std;
point center(point *c, int size)
{
    float sum=0;
    float sum2=0;
    float arevage;
    float arevage2;
    for(int i=0;i<size;i++)
    {
        sum += c[i].getx();
        sum2 += c[i].gety();
    }
    arevage=sum/size;
    arevage2=sum2/size;
    point a;
    a.setx(arevage);
    a.sety(arevage2);
    return a;
}
void compare(point a, point b,point p)
{
    float d1;
    float d2;
    d1=a.distance(p);
    d2=b.distance(p);
    
        if(d1<d2)
        {
            cout <<"point p is closer to cluster A" << endl;
            
        }
        else
        {
            cout <<"point p is closer to cluster B" << endl;
        }
    
   
}
int main()
{
    srand(time(NULL));
    point *clusterA;
    clusterA= new point[20];
    for(int i=0;i<20;i++)
    {
        (clusterA+i)->setx(70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(90-70))));
        (clusterA+i)->sety(70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(90-70))));
        
    }
    point *clusterB;
    clusterB=new point[20];
    for(int j=0;j<20;j++)
    {
        (clusterB+j)->setx(20 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(40-20))));
        (clusterB+j)->sety(20 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(40-20))));
         
    }
    point *p;
    p=new point[20];
    for(int x=0;x<20;x++)
    {
        (p+x)->setx(5 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-5))));
        (p+x)->sety(5 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-5))));
    }
    for(int y=0;y<20;y++)
    {
        p[y].display();
        compare(center(clusterA,20),center(clusterB,20),p[y]);
    }
    delete []clusterB;
    delete []clusterA;
    delete []p;
}


