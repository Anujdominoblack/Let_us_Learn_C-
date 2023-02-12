#include<iostream>
using namespace std;
void fun1() //function 1
{
    cout<<"f1 begins"<<endl;
    throw 100; //exception is thrown 
    cout<<"f1 ends"<<endl;
}
void fun2() //function 2
{
    cout<<"f2 begins"<<endl;
    fun1(); //function call
    cout<<"f2 ends"<<endl;
}
void fun3()  //function 3
{
    cout<<"f3 begins";
    try{  //try block
    fun2();}
    catch(int x) //exception is handled
    {
        cout<<"exception caught"<<endl;
    }
    cout<<"f3 ends"<<endl;
}
int main(){
fun3(); //function call
cout<<"bye";
return 0;

}