#include<iostream>
using namespace std;
void fun()  //function is created
{
    cout<<"This is a c++ file";
}
int main()  
{
    void (*fun_ptr)()=&fun;  //function pointer is created 
    fun_ptr();  //function pointer is called
    return 0;
}