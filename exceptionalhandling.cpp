#include<iostream>
using namespace std;
int main()
{
    double x,y;  //two duble values are created
    cout<<"enter the values of x and y"<<endl;
    cin>>x>>y;  //values are taken as input
    try{
        if(x==0.0)  // if x is zero 0 is thrown is int 
        {
            throw 0;
        }
        if(y==0.0)  //if y is zero string is thrown 
        {
            throw string("the value of y is zero");
        }
        if(x+y<0.0)  //is sum is less x+y is thrown of type double 
        {
            throw x+y;
        }
    }
    catch(int a)  //catch catches a exception and handles it of type int 
    {
        cout<<a<<" x is zero";
    }
    catch(string s) //catch catches a exception and handles of type string 
    {
        cout<<s;
    }
    catch(...) // catch catches a exception of every other type
    {
        cout<<"x+y is less than zero";
    }
    cout<<"bye";
    return 0;
    
}