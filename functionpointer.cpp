#include<iostream>
using namespace std;
void fun(int *p) //function is created with pointer as argument 
{
    *p=*p+5; //pointer is increased
}
int main()
{
  int x=10;  //variable is created
  fun(&x);  //function call
  cout<<x<<" ";  //value is displayed 
  return 0; 
}