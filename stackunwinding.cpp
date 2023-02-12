#include<iostream>
using namespace std;
void fun1()  //function 1 is called
{
    cout<<"f1 begins"<<endl;  //output begins
    throw 100;  //exception is throwned
    cout<<"f2 ends"<<endl;
}
void fun2()
{
    cout<<"f2 begins"<<endl; //output of function 2
    fun1();  //function call
    cout<<"f2 ends"<<endl;
}
int main()
{
    try{  //code is checked that may throw an exception
        fun2();  //function call
    }
    catch(int x) //catch block to handle exception
    {
        cout<<"caught exception"<<endl;
    }
    cout<<"bye";  //main ends
    return 0;
}