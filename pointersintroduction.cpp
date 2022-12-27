#include<iostream>
using namespace std;
int main()
{
    int x=10; //variable is created
    int *p;   //pointer is created and declared of type int 
    p=&x;  //pointer store address of x
    cout<<x<<" ";  //prints the value of x
    cout<<p<<" ";  //prints the address of x 
    cout<<*p<<" "; //prints the value at x
    return 0;
}