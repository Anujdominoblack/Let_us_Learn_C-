#include<iostream>
using namespace std;
int main()
{
    int x=10; //varaible is created and intialised
    int *ptr=&x;    //pointer is declared and value is assigned
    cout<<*ptr<<" ";  //print value of x
    x=x+30;     //value of x is modified
    cout<<*ptr<<" ";   //value of pointer is again printed
    *ptr=*ptr+40;  //pointer arithmatic is performed to change the value 
    cout<<x<<" ";  //output is shown 
    return 0;
}