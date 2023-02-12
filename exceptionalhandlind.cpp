#include<iostream>
using namespace std;
int main()
{
    int x,y;  //two variables are declared
    cout<<"enter the values of x and y to find the result of division of x/y"<<endl;
    cin>>x>>y;  //input is taken 
    try{   //try block is created to test what can throw an exception
        if( y==0)
        {
            throw 0;  //an exception is thrown 
        }
        else
        {
            cout<<"the ressult of the division is "<<x/y;  //if divisor is zero then the program might crash
        }
    }
    catch(int x)  //exception is catched 
    {
        cout<<"the divisor is zero";
    }
    return 0;
}