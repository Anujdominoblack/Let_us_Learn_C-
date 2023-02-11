#include<iostream>
using namespace std;
typedef struct point{  //structure of type def is created
    int x;   //varaiable x is created
    int y;  //varaible y is created

}P; //an alias of struct point is created that is P
int main()
{
    P p;
    cout<<"enter the value of x present in structure "<<endl;  //values are taken as a input
    cin>>p.x;
    cout<<"enter the value of y present in structure "<<endl;
    cin>>p.y;
    cout<<"the values are "<<p.x<<" "<<p.y; //output is displayed
    return 0;
}