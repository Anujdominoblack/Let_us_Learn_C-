#include<iostream>
using namespace std;
struct p{  //a structure is created
    int x;   //a varaiable of type integer is created
    int y;  //anoter is created
   void point(int a,int b) //a void function is  created
    {
       x=a;
    y=b;
    }
    void sum(int a,int b)  // another void function is created which do the operation of addition
    {
        cout<<"the sum is "<<a+b; //result of sum is displayed
    }
};
int main()
{
     p q;  //an alias is created
    q.point(10,20);   //function call
    q.sum(10,20);  //function call
    return 0;

}