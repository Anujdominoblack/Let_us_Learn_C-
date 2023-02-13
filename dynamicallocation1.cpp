#include<iostream>
using namespace  std;
int *fun()
{
    int *ptr=new int;  //dynamic memory allocation
    *ptr=10;
    return ptr;
}
int main()
{
    int x,y;
    cout<<*fun(); //function call
    return 0;
}