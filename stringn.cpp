#include<iostream>
using namespace std;
int main()
{
    string str="this is a c++ programme ";
    int res=str.find("c++");
    if(res==string::npos)
       cout<<"not present \n"<<endl;
    else
    cout<<"it is present at index "<<res<<endl;
}