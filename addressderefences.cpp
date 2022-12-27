#include<iostream>
using namespace std;
int main()
{
    int x; //varaible of type int is created
    x=10;  //value is asssigned to the varaible 
    cout<<&x<<" ";//returns the address of the variable as we have used address  operator 
    cout<<*(&x)<<" "; //returns the value of  the variable as we have used defrence operator 
    return 0; 
}