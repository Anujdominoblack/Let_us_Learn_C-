#include<iostream>
using namespace std;
int *fun()  //pointer function
{
    int a=10;
    int *ptr=&a;
    return ptr;
}
int main()
{
    int x,y;  //int varaible declared
    cout<<*fun();  //output 
    return 0;
}