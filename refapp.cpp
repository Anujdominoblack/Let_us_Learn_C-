#include<iostream>
using namespace std;
void swap(int &x,int &y) //function is created for swapping the values
{
    int temp;  //varaiable is created to swap the values
    temp=x;
    x=y;
    y=temp;  //values of variables are swapped
}
int main()
{   
    int x=10,y=20;       //two variables are created for swapping 
    cout<<x<<" "<<y<<endl;   //output value before swapping 
    swap(x,y);   //function call
    cout<<x<<" "<<y;    //values after being swapped displayed 
    return 0;  
}