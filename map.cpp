#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> m;  //map is used to store key value pairs
    m.insert({10,200});//insert function for inserting the elements 
    m[5]=100;
    m.insert({3,300});
    for(auto & x:m)  //loop for traversal
    {
        cout<<x.first<<" ";  //output for 1st
        cout<<x.second<<endl;  //output for 2nd
    }
    return 0;

}