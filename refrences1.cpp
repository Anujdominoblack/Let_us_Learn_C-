#include<iostream>
using namespace std;
int main()
{
    int x=10;  //varaibles are created 
    int &y=x;   //refrence variable y is created which is alias of x
    cout<<y<<" ";  //output is displayed
    x=x+5;   //value of the variable x is incremented by 5
    cout<<y<<" ";   //value of alias y is shown 
    y=y+5;   //value of y is incremented 
    cout<<x<<" ";   //result is displayed 
    return 0;
}