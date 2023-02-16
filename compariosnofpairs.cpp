#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair <int,int> p;  //pair is created 
    p={10,20};  //values are assigned 
    pair <int,int> q;  //another pair is craeted 
    q={30,40};   //value is assigned
    cout<<(p==q)<<endl<<(p!=q)<<endl<<(p>q)<<endl<<(p<q);
    return 0;
    //(p==q) compares both the values and if  both are equal then its returns true
    //(p>q) and(p<q)compares only the first value
}