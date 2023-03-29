#include<iostream>
using namespace std;
int main()
{
    string str="dominic"; //string is created
    cout<<str.length()<<endl;;   //gives the length of the string
    cout<<str.substr(1,3)<<endl;;  //creates the substring
    str=str+"xyz";   //string catenation
    cout<<str<<endl;  //output
    cout<<str.find("min");  //it find the index 
    return 0;
}