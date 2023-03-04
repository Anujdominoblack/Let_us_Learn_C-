#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l={10,20,30,40};  // a list is created 
    fill(l.begin(),l.end(),5);  //fill function is called
    for(int x:l)  //for traversing 
    {
        cout<<x<<endl;  //output 
    }
    return 0;
}