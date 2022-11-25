#include<iostream>
using namespace std;
int main()
{
    int a; //variable declared
    cin>>a; //entered number 
    if(a>0)
    {cout<<"your entered number is positive"; //output
    }
    if(a<0)
    {
        cout<<"your entered number is negative"; //output
    }
    if(a==0) //assignment operator 
    {
        cout<<"you entered zero"; //output
    }
    return 0;
}