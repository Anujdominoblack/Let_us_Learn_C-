#include<iostream>
using namespace std;
int main()
{
    int x=10,z=20;  //varaibles are created
    int &y=x;   //refrenece varaiable is created
    y=z;  //y is assigned to z
    y=y+5;   //value is incremented
    cout<<x<<" "<<y<<" "<<z;   //displaying the value of varaibles
    return 0; 
    
}