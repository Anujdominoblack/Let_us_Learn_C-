#include<iostream>
using namespace std;
int divisior(int x,int y) //divisor function is created 
{
    cout<<"the division result is x/y"<<endl;  
    if(y==0)
    {
        throw 0; //exception is thrown 
    }
    else{
        cout<<x/y;
    }
    return 0;
}
int main()
{
    int a,b;  //two variables are created
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b; //two variables are taken as input
    try //try block to check code that may throw an exception
    {
        int res=divisior(a,b); //function call
    }
    catch(int x)  //catch block to handle exception 
    {
        cout<<"the divisor is zero bro "; //output 
    }
    return 0;

   
    
}