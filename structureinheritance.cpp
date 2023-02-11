#include<iostream>
using namespace std;
struct base{ //parent structure 
  int x;  //int type variable

};
struct derived : base  //child 
{
 
};
int main()
{
    derived d;  //alias of derived 
 d.x=40;
 cout<<d.x<<endl;  //output
}