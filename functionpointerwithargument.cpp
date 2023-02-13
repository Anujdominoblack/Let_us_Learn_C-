#include<iostream>
using namespace std;
int fun(int x,int y)
{
    return x+y;
}
int main()
{
    auto fun_ptr=&fun;  //function pointer
    cout<<fun_ptr(10,20);  //argument is taken  by the function pointer
    return 0;
}