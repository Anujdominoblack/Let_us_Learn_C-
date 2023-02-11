#include<iostream>
using namespace std;
struct point{  //structure is created 
    int x;  //int varaible is created 
    int y;   //int varaible is created
};
int main()
{
    point p;  //structure variable v is created 
    p.x=20;  //x value is given 
    p.y=30;  //y value is given 
    point *ptr=&p;   //structure pointer is created 
    cout<<ptr->x<<endl;  //output 
    cout<<ptr->y<<endl;  //output
}