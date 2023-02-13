#include<iostream>
using namespace std;
int add(int x,int y) //function 
{
    return x+y;
}
int multiply(int x,int y) //function
{
    return x*y;
}
int compute(int x,int y,int(*fun_ptr)(int,int))  //function pointer as parameter
{
    return fun_ptr(x,y);
}
int main()
{
    cout<<compute(10,20,add)<<endl; //function call
    cout<<compute(20,30,multiply)<<endl; //function call
    return 0;
}